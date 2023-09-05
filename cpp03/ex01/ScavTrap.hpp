/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:25 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/05 17:50:11 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap &source);
		virtual ~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap &source);
		void guardGate();
		void attack(std::string const &target);
};

#endif