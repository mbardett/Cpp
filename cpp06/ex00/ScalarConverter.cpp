/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/13 18:20:01 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//need to initialize static variables

std::string ScalarConverter::_type = "";
std::string ScalarConverter::_literal = "";
char ScalarConverter::_cVal = '\0';
int ScalarConverter::_iVal = 0;
float ScalarConverter::_fVal = 0.0f;
double ScalarConverter::_dVal = 0.0;

//not going to use OrthodoxCanonicalForm members, because this class,
//being "PSEUDO STATIC" (just invented this definition), will not be initialized
ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Constructor called" << std::endl;
}


ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called"<< std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &source)
{
	*this = source;
	std::cout << "ScalarConverter Copy constructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &source)
{
	std::cout << "ScalarConverter assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	return *this;
}

//checks the string, eventually truncates it (for cases like +inFF or 
// -inFF) and then returns it
std::string ScalarConverter::checkArg(std::string str)
{
	std::string tmp;
	tmp = str;
	if (str[str.length() -1] == 'f' && str[str.length() -2] == 'f')
	{

		tmp = str.substr(0, str.length()-1);
	}
	for (int i = 0; i < 3; i++)
	{
		if (tmp == nDef[i])
			return(nDef[i]);
	}
	return (tmp);
}
void ScalarConverter::setType(std::string str)
{
	ScalarConverter::_type = str;
}

std::string ScalarConverter::getType()
{
	return ScalarConverter::_type;
}

void ScalarConverter::findType(std::string str)
{
	if (str.length() == 1 && !std::isdigit(str.at(0)))
	{
		setType("char");
		return;
	}
	else if ((str.length() == 1 && std::isdigit(str.at(0))) )
	{
		setType("int");
		return;
	}
	for (long i = 0; i < (long)str.size(); i++)
	{
		if (str.at(i) == '.')
		{
			double myD = std::strtod(str.c_str(), NULL);
			if (str.at(str.length() -1) == 'f' && myD > std::numeric_limits<float>::min() && 
			myD < std::numeric_limits<float>::max())
			{
				setType("float");
				return;
			}
			else if (myD > std::numeric_limits<double>::min() && 
				myD < std::numeric_limits<double>::max())
				{
					setType("double");
					return;
				}
		}
	}
	for (long i = 0; i < (long)str.size(); i++)
	{
		if (!std::isdigit(str.at(i)))
		{
			setType("wrong");
			return;
		}
	}
	if (strtol(str.c_str(), NULL, 0) > std::numeric_limits<int>::min() && 
		strtol(str.c_str(), NULL, 0) < std::numeric_limits<int>::max())
		{
			setType("int");
			return;
		}
	else
		setType("wrong");
}

void ScalarConverter::fromChar(std::string str)
{
	_cVal = static_cast<char>(str.at(0));
	_dVal = static_cast<int>(_cVal);
	_fVal = static_cast<float>(_cVal);
	_dVal = static_cast<double>(_cVal);
}

void ScalarConverter::fromInt(std::string str)
{
	_iVal = static_cast<int>(std::atoi(str.c_str()));
	_cVal = static_cast<char>(_iVal);
	_fVal = static_cast<float>(_iVal);
	_dVal = static_cast<double>(_iVal);
}

void ScalarConverter::fromFloat(std::string str)
{
	_fVal = static_cast<float>(atof(str.c_str()));
	_cVal = static_cast<char>(_fVal);
	_iVal = static_cast<int>(_fVal);
	_dVal = static_cast<double>(_fVal);
}

void ScalarConverter::fromDouble(std::string str)
{
	_dVal = static_cast<double>(atof(str.c_str()));
	_cVal = static_cast<char>(_dVal);
	_iVal = static_cast<int>(_dVal);
	_fVal = static_cast<float>(_dVal);
}

void ScalarConverter::convert(std::string str)
{
	
	_literal = checkArg(str);
	findType(_literal);
	if (!_type.compare("char"))
		fromChar(_literal);
	else if (!_type.compare("int"))
		fromInt(_literal);
	else if (!_type.compare("float"))
		fromFloat(_literal);
	else if (!_type.compare("double"))
		fromDouble(_literal);
}

void ScalarConverter::myPrint()
{
	std::string cOut ;
	std::string iOut;
	std::string fOut;
	std::string dOut;
	// std::cout << "DETECTED TYPE IS "<< _type << std::endl;
	// std::cout << "DEBUG, cVal = " << _cVal << ", iVal = " << _iVal << ", fVal = "<<_fVal << ", dVal = " << _dVal << std::endl;
	int i = 0;
	if (!_type.compare("wrong"))
	{
		std::cout << "One or more type conversions cannot be handled" << std::endl;
		std::cout << "Reason: type limit exceeded. Exiting Program" << std::endl;
		return;
	}
	for(i = 0; i < 3; i++)
	{
		if (!_literal.compare(nDef[i]))
		{
			cOut = "impossible";
			break;
		}
		else
			cOut = _cVal;
	}
	if (!std::isprint(_cVal) || strtol(_literal.c_str(), NULL, 0) > 126 || 
		strtol(_literal.c_str(), NULL, 0) < 33)
			cOut ="Non displayable";
	std::cout << "char: " << cOut << std::endl;
	for(i = 0; i < 3; i++)
	{
		if (!_literal.compare(nDef[i]))
		{
			iOut = "impossible";
			std::cout << "int: " << iOut << std::endl;
			break;
		}
	}
	if (i == 3)
		std::cout << "int: " << _iVal << std::endl;
	for(i = 0; i < 3; i++)
	{
		if (!_literal.compare(nDef[i]))
		{
			fOut = nDef[i];
			std::cout << "float: " << fOut  << std::endl;
			break;
		}
	}
	if (i == 3)
		std::cout << "float: " << std::fixed << std::setprecision(1) << _fVal << "f" << std::endl;
	for(i = 0; i < 3; i++)
	{
		if (!_literal.compare(nDef[i]))
		{
			dOut = nDef[i];
			std::cout << "double: " << dOut << std::endl;
			break;
		}
	}
	if (i == 3)
		std::cout << "double: " << std::fixed << std::setprecision(1) << _dVal << std::endl;
	_type = "";
	_literal = "";
	_cVal = '\0';
	_iVal = 0;
	_fVal = 0.0f;
	_dVal = 0.0;
}

