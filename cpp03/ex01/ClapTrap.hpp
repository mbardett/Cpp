/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:47 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/07 18:14:08 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

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