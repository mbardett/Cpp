/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:42 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/07 18:32:30 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) :_name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << this->_name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " Deconstructor called" << std::endl;
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



int	ClapTrap::getAtkDmg() const
{
	return (this->_AttackDamage);
}

int	ClapTrap::getHp() const
{
	return(this->_HitPoints);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getEnergy() const
{
	return (this->_EnergyPoints);
}

void ClapTrap::setName(std::string name)
{
	this->_name =  name;
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
	this->setAtkDmg(+1);
	this->setEnergy(-1);
	std::cout << "ClapTrap "<< this->_name << " attacks " << target;
	std::cout << ", causing " << getAtkDmg() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	setHp(getHp() - amount);
	std::cout << "ClapTrap "<< this->_name << " gets hit";
	std::cout << ", receiving " <<  amount << " points of damage!" << std::endl;
	if (this->_HitPoints <= 0)
		std::cout << this->_name <<"\033[38;5;160m died!\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_HitPoints += amount;
	this->_EnergyPoints--;
	std::cout << "ClapTrap "<< this->_name << "is healing ";
	std::cout << ", restoring " <<  amount << " HP!" << std::endl;
}