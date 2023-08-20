/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:46:19 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 18:25:21 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	_type;
			
	public:
		Weapon(std::string typeName);
		~Weapon();
		const std::string  &getType();
		void setType(const std::string &newType);
};
