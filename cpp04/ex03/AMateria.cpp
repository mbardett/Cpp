/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:14:45 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 23:06:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor has been called"<< std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor has been called" << std::endl;
}

AMateria::AMateria(const AMateria &source): _type(source._type)
{
	*this = source;
	std::cout << "AMateria copy constructor has been called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	std::cout << "AMateria assignment operator has been called" << std::endl;
	if (this == &source)
		return (*this);
	this->_type = source.getType();
	return (*this);
}

AMateria::AMateria(const std::string &type): _type(type)
{
	std::cout << "AMateria custom type constructor has been called"<< std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	if (_type == "ice")
		std::cout << "\033]38;5;123m* shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
	if (_type == "cure")
		std::cout << "\033[38;5;120m* heals " << target.getName() << "'s wounds *\033[0m" << std::endl;
}
