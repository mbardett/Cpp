/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:15 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/02 21:51:25 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setName("ScavTrap");
	this->setHp(100);
	this->setAtkDmg(20);
	this->setEnergy(50);
	std::cout << "default Scav constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav deconstructor called" << std::endl;
	std::cout << "ScavTrap " << this->getName() << "copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	*this = source;
}

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	this->setHp(100);
	this->setAtkDmg(20);
	this->setEnergy(50);
	std::cout << "custom name Scav constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
	if (this == &source)
		return (*this);
	this->setName(source.getName());
	this->setAtkDmg(source.getAtkDmg());
	this->setEnergy(source.getEnergy());
	this->setHp(source.getHp());
	return (*this);
}
void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << "for " << this->getAtkDmg() << "points of damage!"<< std::endl;
	this->setAtkDmg(+1);
	this->setEnergy(-1); 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode, and YOU SHALL NOT PASS!!!" << std::endl;
	std::cout << "YOU SHALL NOT PASS!!!" << std::endl;
}