/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:06:41 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 23:04:38 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

//The Subject defines the class as only having public members,
//but the presence of the getName() function implies a non-public attribute;
//The Subject says this needs to be an abstract class and that it will
//be inherited, so the non-public members are defined as protected instead of private


//need to declare the AMateria class or the compiler starts complaining
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected:
		std::string _name;
};

#endif