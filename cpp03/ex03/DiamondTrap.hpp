/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:39:21 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 20:45:19 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap &source);
		DiamondTrap &operator=(const DiamondTrap &source);

	DiamondTrap(const std::string name);
	using ScavTrap::attack;
	void whoAmI();
};

#endif