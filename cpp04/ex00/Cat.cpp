/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:44:18 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/04 21:24:24 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &source) : Animal(source)
{
	*this = source;
	std::cout << "Cat copy constructor called"<< std::endl;
}

Cat &Cat::operator=(const Cat &source)
{
	this->_type = source._type;
	std::cout << "Cat assignment constructor called" << std::endl;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat makes a very scary MEWWWW!" << std::endl;
}

std::string Cat::getType() const
{
	return (this->_type);
}