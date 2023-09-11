/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:49:30 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 16:35:52 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("unknown")
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Character default constructor called"<< std::endl;
}

Character::Character(std::string name) :_name(name) 
{
	for (int i = 0; i < 4; i++)
		this->_slots[i] = NULL;
	std::cout << "Character default constructor called"<< std::endl;
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
			delete this->_slots[i];
	}
	std::cout << "Character destructor called"<< std::endl;
}

Character::Character(const Character &source)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->_name = source._name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = source._slots[i];
}

Character &Character::operator=(const Character &source)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this == &source)
		return (*this);
	this->_name = source._name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = source._slots[i];
	return (*this);
}

const std::string &Character::getName()const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4;i++)
	{
		if (!this->_slots[i])
		{
			this->_slots[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	this->_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0)
		return;
	if (this->_slots[idx])
		this->_slots[idx]->use(target);
	else
		std::cout << getName()<< " wants to use a materia, but reaches the wrong pocket of her backpack, which is empty!" << std::endl;
	return;
}