/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:32:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/29 16:55:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate()
{
	int random;
	srand(time(0));
	random = 1 + ( rand() % 3);
	std::cout << "RANDOM = "<< random << std::endl;
	if (random == 1)
		return (new A);
	else if (random == 2)
		return (new B);
	else if (random == 3)
		return (new C);
	return NULL;
}

void identify(Base *p)
{
	
	if (dynamic_cast<A*>(p)!= NULL)
		std::cout << "Object type A" << std::endl;
	else if (dynamic_cast<B*>(p)!= NULL)
		std::cout << "Object type B" << std::endl;
	if (dynamic_cast<C*>(p)!= NULL)
		std::cout << "Object type C" << std::endl;
}

//from https://docs.oracle.com/cd/E19205-01/819-5267/bkahm/index.html
//A dynamic_cast to a reference type requires an exception to be thrown 
//if the conversion is found at run time to be invalid.
//we can't use the  "badcast" exception because it is included 
//in the typeinfo header(forbidden by the subject)
void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Referenced type is A" << std::endl;
		//silencing a for -Wunused-variable
		(void)a;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "Referenced type is B" << std::endl;
			//silencing b  for -Wunused-variable
			(void)b;
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "Referenced type is C" << std::endl;
				//silencing c  for -Wunused-variable
				(void)c;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}

//dynamic_cast< target-type >( expression )
//fromm Stackoverflow
// Run-Time Type Information (RTTI) is available only 
// for classes which are polymorphic, which means they
//  have at least one virtual method. dynamic_cast and typeid need RTTI.
//Also check
//1)  https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/
//and 2) https://www.geeksforgeeks.org/rtti-run-time-type-information-in-cpp/