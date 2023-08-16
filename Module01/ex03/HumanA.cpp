/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:10:16 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 18:46:35 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wpn)
{
	this->_name = name;
	this->_weapon = &wpn;
}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with " << _weapon->getType() << std::endl;
}