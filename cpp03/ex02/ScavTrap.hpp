/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:25 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/02 21:45:21 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &source);
		virtual ~ScavTrap();
		
		ScavTrap &operator=(const ScavTrap &source);
		void guardGate();
		void attack(std::string const &target);
};

#endif