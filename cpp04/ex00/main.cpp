/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 15:14:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << std::endl << "\033[38;5;46m#########  TESTS FROM THE SUBJECT  #########\033[0m" << std::endl;
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl;

	std::cout << std::endl << "\033[38;5;211m#########  ADDITIONAL TESTS  #########\033[0m" << std::endl;
	std::cout << std::endl;
	Cat cat;
	Cat copyOfCat(cat);
	Cat catOperatorCopy = copyOfCat;
	Dog dog;
	Dog copyOfDog(dog);
	Dog dogOperatorCopy = copyOfDog;
	cat.makeSound();
	copyOfCat.makeSound();
	catOperatorCopy.makeSound();
	dog.makeSound();
	copyOfDog.makeSound();
	dogOperatorCopy.makeSound();
	std::cout << std::endl;

	std::cout << "\033[38;5;202m#########  DESTRUCTION  #########\033[0m" << std::endl;
	std::cout << std::endl;
	
	return (0);
}