/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:18 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/25 21:48:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <stdlib.h>
#include <string>


static std::string nDef[] = {"-inf", "+inf", "nan"};
static std::string types[] = {"char", "int", "float", "double"};

class ScalarConverter
{
	private:
		// static std::string _literal;  
	public:
		ScalarConverter();
		// ScalarConverter(std::string arg);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &source);
		ScalarConverter &operator=(const ScalarConverter &source);
		//will see which exceptions are needed as things go on
		class WrongConvertException : public std::exception
		{
			const char* what() const throw()
			{
				return "impossible";
			}
		};
		class NonDisplayableException : public std::exception
		{
			const char* what() const throw()
			{
				return "Non displayable";
			}
		};
		static std::string checkArg(std::string str);
		static char toChar(std::string str);
		static int toInt(std::string str);
		static float toFloat(std::string str);
		static double ToDouble(std::string str);
		static void convert(std::string str);
		static void myPrint(std::string str);
};
