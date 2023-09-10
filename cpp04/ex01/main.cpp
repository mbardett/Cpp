/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 18:07:22 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"


int	main(void)
{
	Animal* animals[10];
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "cat "<< i <<std::endl;
		animals[i] = new Cat;
	}
	for (size_t i = 5; i < 10; i++)
	{
		std::cout << "dog " << i <<std::endl;
		animals[i] = new Dog;
	}

	Cat *catty = new Cat;
	Dog *doggy = new Dog;
	catty->printIdeas();
	doggy->printIdeas();
	delete catty;
	delete doggy;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << i <<std::endl;
		delete animals[i];
	}
	return (0);
}