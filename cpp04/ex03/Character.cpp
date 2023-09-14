/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:49:30 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/14 16:49:28 by mbardett         ###   ########.fr       */
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

Character::Character(const Character &source): _name(source._name)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = source._slots[i]->clone();
}

Character &Character::operator=(const Character &source)
{
	std::cout << "Character assignment operator called" << std::endl;
	if (this == &source)
		return (*this);
	this->_name = source._name;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = source._slots[i]->clone();
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
			std::cout << this->getName()<< " equipped a very powerful materia in slot "<< i <<" and is not afraid to use it!" << std::endl;
			std::cout << "The equipped materia is of type "<< this->_slots[i]->getType()<< std::endl;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
	{
		this->_slots[idx] = NULL;
		std::cout << getName() << " just dropped a Materia!"<< std::endl;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0)
		return;
	if (this->_slots[idx])
	{
		this->_slots[idx]->use(target);
		return;
	}

	std::cout << getName()<< " wants to use a materia, but reaches the wrong pocket of her backpack, which is empty!" << std::endl;
	return;
}