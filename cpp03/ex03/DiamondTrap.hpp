/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:39:21 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/05 17:03:25 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

class DiamondTrap : public ScavTrap, public FragTrap
{
	protected:
		std::string _name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &source);
		DiamondTrap &operator=(const DiamondTrap &source);

	DiamondTrap(const std::string name);
	using ScavTrap::attack;
	void whoAmI();
};

#endif