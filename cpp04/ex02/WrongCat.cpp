/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:04:34 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 15:08:42 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &source) : WrongAnimal(source)
{
	this->_type = source._type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &source)
{
	this->_type = source._type;
	std::cout << "WrongCat overload constructor called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat makes a very scary and wrong BARRRRRRK!" << std::endl;
	
}