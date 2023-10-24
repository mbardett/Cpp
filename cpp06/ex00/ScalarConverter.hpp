/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:41:18 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/24 18:56:38 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <limits>
#include <iomanip>
#include <cstdlib>


static std::string nDef[] = {"-inf", "+inf", "nan"};
static std::string types[] = {"char", "int", "float", "double"};

//the subject asks to define a static class...except we can't...

//from https://www.tutorialspoint.com/how-to-create-a-static-class-in-cplusplus

// "There is no such thing as a static class in C++. The closest approximation is
// a class that only contains static data members and static methods. Static data 
// members in a class are shared by all the class objects as there is only one copy 
// of them in the memory, regardless of the number of objects of the class. 
// Static methods in a class can only access static data members, other static 
// methods or any methods outside the class."

//but since module 02 we have to implement the Canonical Orthodox Form and,
// therefore, "override" constructors, destructor and assignment operator.
//GUESS WHAT?you can't have static constructors, YAY!
//


class ScalarConverter
{
	public:

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
		static std::string _type;
		static std::string _literal;
		static char _cVal;
		static int	_iVal;
		static float	_fVal;
		static double	_dVal;
		static void setType(std::string str);
		static std::string getType();
		static std::string checkArg(std::string str);
		static void findType(std::string str);
		static void fromChar(std::string str);
		static void fromInt(std::string str);
		static void fromFloat(std::string str);
		static void fromDouble(std::string str);
		static void convert(std::string str);
		static void myPrint();
//putting constructor etc private, we won't 
//need them since all the members are going to be static
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &source);
		ScalarConverter &operator=(const ScalarConverter &source);
};
