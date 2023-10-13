/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:53:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/13 17:44:50 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
int	main( int argc, char *argv[])
{

	// std::string a = "555.0f";
	// std::string d = "*";
	// std::string e = "2244444444";
	// std::string t = "42.2";
	// std::cout << a << std::endl;
	// ScalarConverter::convert(a);
	// ScalarConverter::myPrint();
	// std::cout << d << std::endl;

	// ScalarConverter::convert(d);
	// ScalarConverter::myPrint();

	// std::cout << e << std::endl;
	// ScalarConverter::convert(e);
	// ScalarConverter::myPrint();
	// std::cout << t << std::endl;
	// ScalarConverter::convert(t);
	// ScalarConverter::myPrint();
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		ScalarConverter::myPrint();
	}

	return 0;
}