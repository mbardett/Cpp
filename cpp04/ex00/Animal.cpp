/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:30:44 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/09 22:20:17 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &source)
{
	*this = source;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &source)
{
	this->_type = source._type;
	std::cout << "Animal assignment constructor called" << std::endl;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a very scary sound!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}