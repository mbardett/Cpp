/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:36:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 17:42:41 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{

	std::cout << "---> FIGHT TEST WITH FRAGTRAP <---" << std::endl;
	std::cout << std::endl;
	FragTrap frag ("Kermit");
	frag.setHp(100);
	std::cout << "Kermit has " << frag.getHp() << " HP" << std::endl; 
	frag.highFivesGuys();
	frag.attack("his enemy");
	std::cout << "His enemy is striking back!" << std::endl;
	frag.takeDamage(33);
	std::cout << "Mike has some food!" << std::endl;
	frag.beRepaired(70);
	std::cout << "His enemy is striking again!" << std::endl;
	frag.takeDamage(34);	
	std::cout << "Mike has some food!" << std::endl;	
	frag.beRepaired(50);
	std::cout << "His enemy keeps striking!" << std::endl;
	std::cout << "FragTrap has " << frag.getHp() << " points of health" << std::endl;
	frag.takeDamage(33);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "---> DESTRUCTIONS <---" << std::endl;
	std::cout << std::endl;
	return 0;
}