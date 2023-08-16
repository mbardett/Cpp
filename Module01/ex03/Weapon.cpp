/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:52:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 18:18:30 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	//std::cout << "Weapon forged"<< std::endl;
	this->_type = type;
}

Weapon::~Weapon()
{
	//	std::cout << "Weapon destroyed"<< std::endl;
}

const std::string &Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(const std::string &newType)
{
	this->_type = newType;
}