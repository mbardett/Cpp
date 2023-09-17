/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/17 11:21:43 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b(1, "Willy Wanker");
	std::cout << "FIRST BLOCK:" << std::endl;
	std::cout << std::endl;
	try
	{
		b.promote(1);
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "SECOND BLOCK:" << std::endl;
	std::cout << std::endl;
	try
	{
		b.promote(1);
		std::cout << b;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "THIRD BLOCK:" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat a = Bureaucrat(145, "Fat Bob");
		Bureaucrat c(a);
		c.getName();
		for (int i =0; i < 10; i++)
		{
			c.promote(1);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "FOURTH BLOCK:" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat c = b;
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	//if the Bureaucrats instances start inside the try-block and then an exception occurs,
	//their destructors get called at the end of the try-block, before the exception ouput is
	//displayed
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "FIFTH BLOCK:" << std::endl;
	std::cout << std::endl;
	Bureaucrat a = Bureaucrat(145, "Fat Bob");
	Bureaucrat c(a);
	try
	{
		// Bureaucrat a = Bureaucrat(145, "Fat Bob");
		// std::cout << b;
		// Bureaucrat c(a);
		c.getName();
		for (int i =0; i < 10; i++)
		{
			c.demote(1);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}