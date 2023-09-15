/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/15 14:47:56 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"

//silenced the output for Brain's printIdeas() and tabbed constructors and destructors
//outputs trying to make everything a little more readable.
int	main(void)
{
	Animal* animals[10];
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "cat "<< i << ":" <<std::endl;
		animals[i] = new Cat;
		std::cout << std::endl;
	}
	for (size_t i = 5; i < 10; i++)
	{
		std::cout << "dog " << i << ":" <<std::endl;
		animals[i] = new Dog;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	Cat *catty = new Cat;
	std::cout << std::endl;
	Dog *doggy = new Dog;
	std::cout << std::endl;
	catty->printIdeas();
	doggy->printIdeas();
	delete catty;
	std::cout << std::endl;
	delete doggy;
	std::cout << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Destroying rabid animal in slot " << i <<":"<<std::endl;
		delete animals[i];
	}
	return (0);
}