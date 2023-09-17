/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/17 16:33:16 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	b(1, "Bob");
std::cout << "TEST	PROMOTING	RANK		1" << std::endl;
	try
	{
		b.promote(1);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "TEST	INVALID CONSTRUCTION	155" << std::endl;
	try
	{
		Bureaucrat	c(Bureaucrat(155, "Peter"));
		Bureaucrat d(c);
		std::cout << d;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "TEST	DEMOTING	RANK		140" << std::endl;
	try
	{
		Bureaucrat	c(Bureaucrat(140, "Peter"));
		std::cout << c;
		c.demote(9);
		std::cout << c;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "TEST	VALID FORM 120/5" << std::endl;
	try
	{
		Form	f("Form number 1", 120, 5);
		std::cout << f;
		std::cout << b;
		b.signForm(f);
		std::cout << f;
		Form	g(f);
	
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST	INVALID FORM -1/-3" << std::endl;
	try
	{
		Form	h("Invalid form", -1, -3);
		std::cout <<h;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST	INVALID FORM 151/150" << std::endl;
	try
	{
		Form	h("Invalid form", 151, 150);
		std::cout <<h;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST	VALID FORM 42/42" << std::endl;
	try
	{
		Form	l("Form number 2", 42, 42);
		std::cout << l;
		std::cout << b;
		b.signForm(l);
		std::cout << l;
		Form	g(l);
		
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "TEST	ORDER66		1/1" << std::endl;
	Bureaucrat z = Bureaucrat(2,"Grinning B");
	std::cout << z;
	try
	{
		Form x("Order 66", 1, 1);
		std::cout << x;
		z.signForm(x);
		std::cout << x;
		z.promote(1);
		z.signForm(x);
		std::cout <<x;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "TEST	ORDER66		1/1" << std::endl;
	try
	{
		Form x("Order 66", 1, 1);
		std::cout << x;
		z.promote(1);
		z.signForm(x);
		std::cout <<x;
		std::cout << "TEST	ORDER66		1/1 ALREADY SIGNED" << std::endl;
		std::cout << std::endl;
		z.signForm(x);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}