/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:39:03 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/07 17:02:05 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _HitPoints;
		int	_EnergyPoints;
		int	_AttackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &source);
		ClapTrap &operator=(const ClapTrap &source);
		int getAtkDmg();
		int	getHp();
		std::string getName();
		void setAtkDmg(int n);
		void setHp(int amount);
		void setEnergy(int n);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif