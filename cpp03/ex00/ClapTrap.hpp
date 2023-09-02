/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:39:03 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/20 22:12:28 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
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
		void setAtkDmg(int n);
		void setHp(int amount);
		void setEnergy(int n);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif