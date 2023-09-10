/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:35:29 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 18:42:48 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain)
{
	this->setType("Dog");
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::~Dog()
{
	delete (_brain);
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &source) :Animal()
{
	this->_type = source._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &source)
{
	this->_type = source._type;
	std::cout << "Dog assignment constructor called" << std::endl;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog makes a very scary WOOOOF!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}

void Dog::printIdeas()
{
	_brain->printIdeas();
}