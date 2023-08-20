/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:20:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/19 23:14:41 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedNumValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Deconstructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	// std::cout << "Copy assignment operator called"<< std::endl;
	if (this != &source)	
		this->_fixedNumValue = source.getRawBits();
	return (*this);
}

Fixed::Fixed(const int inum):_fixedNumValue (inum << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fnum)
{
	this->_fixedNumValue = roundf(fnum * (1 << _fractionalBits));
	// std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called"<< std::endl;
	return (this->_fixedNumValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedNumValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedNumValue / (1 << _fractionalBits));
}

int Fixed::toInt() const
{
	return ((this->_fixedNumValue >>_fractionalBits));
}

std::ostream &operator<<(std::ostream &output, const Fixed &source)
{
	output << source.toFloat();
	return (output);
}

Fixed Fixed::operator+(const Fixed &source)
{
	Fixed  toret(*this);
	toret.setRawBits( (this->_fixedNumValue + source.getRawBits()));
	return(toret);
}
Fixed Fixed::operator-(const Fixed &source)
{
	Fixed  toret(*this);
	toret.setRawBits( (this->_fixedNumValue - source.getRawBits()));
	return(toret);
}
Fixed Fixed::operator*(const Fixed &source)
{
	Fixed  toret(*this);
	toret.setRawBits( (this->_fixedNumValue * source.getRawBits() / (1 << toret._fractionalBits)));
	return(toret);
}
Fixed Fixed::operator/(const Fixed &source)
{
	Fixed  toret(*this);
	toret.setRawBits( (this->_fixedNumValue / source.getRawBits()));
	return(toret);
}
Fixed Fixed::operator++(int)
{
	Fixed toret(*this);
	++this->_fixedNumValue;
	return(toret);
}
Fixed &Fixed::operator++()
{
	this->_fixedNumValue++;
	return(*this);
}
Fixed Fixed::operator--(int)
{
	Fixed toret(*this);
	toret._fixedNumValue--;
	return(toret);
}
Fixed &Fixed::operator--()
{
	this->_fixedNumValue--;
	return (*this);
}

bool Fixed::operator>(const Fixed &source)
{
	return (_fixedNumValue > source._fixedNumValue);
}
bool Fixed::operator<(const Fixed &source)
{
	return (_fixedNumValue < source._fixedNumValue);
}
bool Fixed::operator>=(const Fixed &source)
{
	return (_fixedNumValue >= source._fixedNumValue);
}		
bool Fixed::operator<=(const Fixed &source)
{
	return (_fixedNumValue <= source._fixedNumValue);
}
bool Fixed::operator==(const Fixed &source)
{
	return (_fixedNumValue == source._fixedNumValue);
}		
bool Fixed::operator!=(const Fixed &source)
{
	return (_fixedNumValue != source._fixedNumValue);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return(a.getRawBits() < b.getRawBits() ? a : b);
}
Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() < b.getRawBits() ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return(a.getRawBits() > b.getRawBits() ? a : b);
}
Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	return(a.getRawBits() > b.getRawBits() ? a : b);
}