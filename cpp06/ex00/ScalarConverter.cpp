/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/12 18:32:26 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//need to initialize static variables

std::string ScalarConverter::_type = "";
std::string ScalarConverter::_literal = "";
//not going to use OrthodoxCanonicalForm members, because this class,
//being "PSEUDO STATIC" (just invented this definition), will not be initialized
ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Constructor called" << std::endl;
}

// ScalarConverter::ScalarConverter(std::string arg)
// {}

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
			//DEBUG
		std::cout << "DEBUG str = " << tmp << std::endl;
	if (str[str.length() -1] == 'f' && str[str.length() -2] == 'f')
	{

		tmp = str.substr(0, str.length()-1);
		std::cout << "DEBUG after reduction tmp = " << tmp << std::endl;

	}
	std::cout << "DEBUG QUACKQUACK!" << tmp << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (tmp == nDef[i])
			return(nDef[i]);
	}
	//need additional checks for float/double?
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
	// ||
			// atoi(str.c_str()))
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
	setType("int");
	std::cout << "STOK"<< std::endl;
}

// char ScalarConverter::fromChar(std::string str)
// {
// 	// if (!str.equals(nDef[i]))
// }

// int ScalarConverter::fromInt(std::string str)
// {}

// float ScalarConverter::fromFloat(std::string str)
// {}

// double ScalarConverter::fromDouble(std::string str)
// {}

// void ScalarConverter::convert(std::string str)
// {}

// void myPrint(std::string str)
// {}

