/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 18:46:11 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	Dog* j = new Dog();
	Cat* i = new Cat();
	const WrongAnimal* Wrong1 = new WrongCat();
	std::cout << Wrong1->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	Wrong1->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete(Wrong1);
	delete(i);
	delete(j);
	Animal  *array[10];
	for(int i = 0; i < 10; i++)
	{
		if(i < 5)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for(int j = 0; j < 10; j++)
		delete array[j];
	return 0;
}