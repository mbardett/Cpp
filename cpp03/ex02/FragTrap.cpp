/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:00:47 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 17:40:12 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setName("");
	this->setHp(100);
	this->setEnergy(100);
	this->setAtkDmg(30);

	std::cout << "FragTrap " << getName() << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName() << " deconstructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source): ClapTrap(source)
{
	*this = source;
}

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setHp(100);
	this->setEnergy(100);
	this->setAtkDmg(30);
	std::cout << "Custom name " << getName()<<  " FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	if (this == &source)
		return (*this);
	this->setName(source.getName());
	this->setAtkDmg(source.getAtkDmg());
	this->setEnergy(source.getEnergy());
	this->setHp(source.getHp());
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "GIMME FUEL, GIMME FIVE, GIMME THAT WICH I DESIRE!" << std::endl;
}
