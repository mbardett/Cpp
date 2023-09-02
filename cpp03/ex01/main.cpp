/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/02 18:50:10 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
		std::cout << "---> FIGHT TEST WITH SCAVTRAP <---" << std::endl;
		std::cout << std::endl;
		ScavTrap scav ("Mike");
		scav.attack("his enemy");
		std::cout << "His enemy is striking back!" << std::endl;
		scav.takeDamage(60);
		std::cout << "Mike has some good old oil to drink!" << std::endl;
		scav.beRepaired(70);
		std::cout << "His enemy is striking again!" << std::endl;
		scav.takeDamage(30);	
		std::cout << "Mike has some good old oil to drink!" << std::endl;	
		scav.beRepaired(50);
		std::cout << "His enemy keeps striking!" << std::endl;
		scav.takeDamage(50);
		std::cout << "ScavTrap has " << scav.getHp() << " points of health";
		std::cout << std::endl;
		scav.guardGate();
		std::cout << std::endl;	

		std::cout << "---> DESTRUCTIONS <---" << std::endl;
		std::cout << std::endl;
}
