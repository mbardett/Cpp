/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:10:04 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 18:49:20 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_type = NULL;
}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_type = &newWeapon;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with " << this->_type->getType() << std::endl;
}