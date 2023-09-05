/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:00:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/05 17:47:44 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"


//Virtual base classes offer a way to save space and avoid ambiguities in class 
//hierarchies that use multiple inheritances. When a base class is specified as
// a virtual base, it can act as an indirect base more than once without duplication
// of its data members. A single copy of its data members is shared by all the base 
//classes that use virtual base. 
//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual.


class FragTrap : virtual public ClapTrap
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &source);
		virtual ~FragTrap();
	
		FragTrap &operator=(const FragTrap &source);
		void highFivesGuys();
};

#endif