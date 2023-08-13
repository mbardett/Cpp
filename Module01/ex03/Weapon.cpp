/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:52:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 18:57:40 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(typeName)
{
	std::cout << "Weapon forged"<< std::endl;
}

Weapon::~Weapon():
{
	std::cout << "Weapon destroyed"<< std::endl;
}