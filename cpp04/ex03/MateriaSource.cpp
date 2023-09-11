/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:52:35 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 19:59:50 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//need to init all the slots to NULL in order to avoid 
//"conditional jump or move depends on uninitialized value(s)"
//from valgrind
MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		(*this)._slots[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_slots[i] = source._slots[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	std::cout << " MateriaSource assignment operator called" << std::endl;
	if (this == &source)
			return (*this);
		for (int i = 0; i < 4; i++)
			this->_slots[i] = source._slots[i];
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	for (; i < 4; i++)
	{
		if (!this->_slots[i])
			break ;
	}
	if (i < 4)
		this->_slots[i] = m->clone();
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_slots[i]->getType().compare(type))
			return (this->_slots[i]->clone());
	}
	return (0);
}

int MateriaSource::freeSlots()
{
	int efFree = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->_slots[i])
		{
			delete this->_slots[i];
			efFree++;
		}
	}
	std::cout <<efFree << " slots cleared" << std::endl;
	return efFree;
}