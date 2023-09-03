/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:20:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 18:21:09 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedNumValue(0)
{
	std::cout << "Default constructor called" << std::endl;	
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	this->_fixedNumValue = source.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called"<< std::endl;
	return (this->_fixedNumValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedNumValue = raw;
}