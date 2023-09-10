/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:51:24 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 23:10:14 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): _type("cure")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &source) : AMateria(source.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &source)
{
	if (this == &source)
		return (*this);
	this->_type = source.getType();
	return(*this);
}

Ice* Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "\033]38;5;123m* shoots an ice bolt at " << target.getName() << " *\033[0m" << std::endl;
}

const std::string &Ice::getType()const
{
	return this->_type;
}