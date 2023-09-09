/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:39:09 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/09 19:19:45 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("QT")
{
	this->FragTrap::setHp(FragTrap::getHp());
	this->FragTrap::setAtkDmg(FragTrap::getAtkDmg());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	ClapTrap::setName(_name + " The Wanderer");
	std::cout << "DiamondTrap " << this->_name << " custom constructor called" << std::endl;
	std::cout << this->getAtkDmg() << " = ATTACKDAMAGE" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : _name(name)
{
	this->FragTrap::setHp(FragTrap::getHp());
	this->FragTrap::setAtkDmg(FragTrap::getAtkDmg());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	ClapTrap::setName(name + " The Wanderer");
	std::cout << "DiamondTrap " << this->_name << " custom constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source) : ClapTrap(source), ScavTrap(source), FragTrap(source)
{
	*this = source;
	std::cout << "DiamondTrap copy constructor " << this->_name << " called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source)
{
	if (this == &source)
		return (*this);
	this->setName(source.ClapTrap::getName());
	this->setHp(source.FragTrap::getHp());
	this->setAtkDmg(source.FragTrap::getAtkDmg());
	this->setEnergy(source.ScavTrap::getEnergy());
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< this->_name <<"destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I AM BATM..hem, cough, I am " << this->_name << ", and my Claptrap name is: " << ClapTrap::getName() << std::endl;
}