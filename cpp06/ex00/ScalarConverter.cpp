/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/25 21:50:04 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

char ScalarConverter::toChar(std::string str)
{}

int ScalarConverter::toInt(std::string str)
{}

float ScalarConverter::toFloat(std::string str)
{}

double ScalarConverter::ToDouble(std::string str)
{}

void ScalarConverter::convert(std::string str)
{}

void myPrint(std::string str)
{}