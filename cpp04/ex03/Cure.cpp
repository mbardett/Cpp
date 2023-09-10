/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:27:13 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 23:09:22 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): _type("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &source) : AMateria(source.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &source)
{
	if (this == &source)
		return (*this);
	this->_type = source.getType();
	return (*this);
}

std::string	const &Cure::getType() const
{
	return (this->_type);
}

Cure* Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "\033[38;5;120m* heals " << target.getName() << "'s wounds *\033[0m" << std::endl;
}
