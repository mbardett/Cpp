/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:38:35 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/07 17:13:28 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	
	std::cout << this->_name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " Deconstructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	this->_name = source._name;
	this->_HitPoints = source._HitPoints;
	this->_EnergyPoints = source._EnergyPoints;
	this->_AttackDamage = source._AttackDamage;
	return (*this);
}

int	ClapTrap::getAtkDmg()
{
	return (this->_AttackDamage);
}

int	ClapTrap::getHp()
{
	return(this->_HitPoints);
}

std::string ClapTrap::getName()
{
	return(this->_name);
}

void ClapTrap::setAtkDmg(int n)
{
	this->_AttackDamage += n;
}

void ClapTrap::setHp(int amount)
{
	this->_HitPoints = amount;
}

void ClapTrap::setEnergy(int n)
{
	this->_EnergyPoints +=n;
}
void ClapTrap::attack(const  std::string &target)
{
	if (!this->_EnergyPoints)
		return;
	this->setAtkDmg(this->getAtkDmg()+1);
	this->setEnergy(this->_EnergyPoints -1);
	std::cout << "ClapTrap "<< this->_name << " attacks " << target;
	std::cout << ", causing " << getAtkDmg() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->setHp(this->getHp() - amount);
	std::cout << "ClapTrap "<< this->_name << " gets hit";
	std::cout << ", receiving " <<  amount << " points of damage!" << std::endl;
	if (this->_HitPoints <= 0)
		std::cout << this->_name <<" \033[38;5;160mdied\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << "ClapTrap "<< this->_name << "is healing ";
	std::cout << ", restoring " <<  amount << " HP!" << std::endl;
}