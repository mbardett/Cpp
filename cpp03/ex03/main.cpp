/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 21:39:06 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	std::cout << "---> FIGHT TEST WITH DIAMONDTRAP <---" << std::endl;
	std::cout << std::endl;
	DiamondTrap diamond("Sparky");
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