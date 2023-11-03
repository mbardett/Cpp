/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:46:06 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/03 20:44:36 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(int argc, char *argv[])
{
	std::cout << "NUMBER OF ARGUMENTS IS "<< argc << std::endl;
	Span spanny(200000);
	spanny.addNumber(6);
	spanny.addNumber(3);
	spanny.addNumber(17);
	spanny.addNumber(9);
	std::cout << spanny.longestSpan() << std::endl;
	if (argc == 1)
	{
		int singleNumber = 17666;
		std::cout << "LONGEST SPAN = " << spanny.longestSpan() << std::endl;
		spanny.addNumber(singleNumber);
		std::cout << "LONGEST SPAN = " << spanny.longestSpan() << std::endl;
		std::cout << "SHORTEST SPAN = " << spanny.shortestSpan() << std::endl;
	}
	else if (argc == 2)
	{
		spanny.addNumber(atoi(argv[1]));
		std::cout << "LONGEST SPAN = " << spanny.longestSpan() << std::endl;
		std::cout << "SHORTEST SPAN = " << spanny.shortestSpan() << std::endl;
	}
	else if (argc > 2)
	{
		std::list<int> tmp;
		for (int i = 1; i < argc; i++)
		{
			tmp.push_back(atoi(argv[i]));
			std::cout << "stored "<< atoi(argv[i]) << "inside tmp" << std::endl;
		}
		spanny.addNumber(tmp.begin(), tmp.end());
		std::cout << "LONGEST SPAN = " << spanny.longestSpan() << std::endl;
		std::cout << "SHORTEST SPAN = " << spanny.shortestSpan() << std::endl;
	}
	return 0;
}