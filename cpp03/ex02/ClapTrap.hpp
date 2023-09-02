/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:47 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/02 21:41:00 by mbardett         ###   ########.fr       */
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
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(ClapTrap const &source);
		ClapTrap &operator=(ClapTrap const &source);
		int getAtkDmg() const;
		int	getHp() const;
		int getEnergy() const;
		std::string getName() const;
		void setName(std::string name);
		void setAtkDmg(int n);
		void setHp(int amount);
		void setEnergy(int n);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif