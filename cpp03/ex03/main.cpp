/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/09 19:18:35 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	std::cout << "---> FIGHT TEST WITH DIAMONDTRAP <---" << std::endl;
	std::cout << std::endl;
	DiamondTrap diamond("Sparky");
	
	// diamond.setHp(555);
	std::cout << "Sparky starts with "<< diamond.getHp() <<" HP," << diamond.getAtkDmg() << " Attack strength and " << diamond.getEnergy() << " Stamina points" << std::endl;
	diamond.attack("his enemy");
	diamond.takeDamage(6);
	diamond.beRepaired(7);
	diamond.takeDamage(3);		
	diamond.beRepaired(4);
	diamond.takeDamage(8);
	std::cout << "DiamondTrap has " << diamond.getHp() << " points of health";
	std::cout << std::endl;	
	diamond.guardGate();
	diamond.whoAmI();
	std::cout << std::endl;

	std::cout << "---> DESTRUCTIONS <---" << std::endl;
	std::cout << std::endl;
	return 0;
}