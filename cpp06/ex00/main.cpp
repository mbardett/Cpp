/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:53:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/12 18:26:19 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
int main (){
// int	main( int argc, char *argv[]) {

	std::string a = "555.0f";
	std::string d = "666";
	std::string e = "e";
	std::string t = "42.0";

	ScalarConverter::findType(a);
		std::cout << "TYPE IS  " << ScalarConverter::getType() << std::endl;
	ScalarConverter::findType(d);
		std::cout << "TYPE IS  " << ScalarConverter::getType() << std::endl;
	ScalarConverter::findType(e);
		std::cout << "TYPE IS  " << ScalarConverter::getType() << std::endl;
	ScalarConverter::findType(t);
		std::cout << "TYPE IS  " << ScalarConverter::getType() << std::endl;
	return 0;
}