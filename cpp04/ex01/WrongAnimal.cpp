/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:00:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/09 22:37:41 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	this->setType("WrongAnimal");
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src) {
    if (this != &src) {
        this->_type = src._type;
    }
    std::cout << "WrongAnimal overload constructor called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal makes a very scary and wrong sound!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string const type)
{
	this->_type = type;
}