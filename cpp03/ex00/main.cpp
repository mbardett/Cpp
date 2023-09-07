/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:06:54 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/07 17:05:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char *argv[])
{
	std::string name1;
	std::string name2;
	if (argc == 3)
	{
		name1 = argv[1];
		name2 = argv[2];
	}
	else if (argc == 1)
	{
		name1 = "Cain";
		name2 = "Abel";
	}
	ClapTrap c1(name1);
	ClapTrap c2(name2);
	
	std::cout << c1.getName() <<" has " << c1.getHp() << " HP " << std::endl;
	std::cout << c2.getName() <<" has " << c2.getHp() << " HP " << std::endl;
	while (c1.getHp() > 0 && c2.getHp() > 0)
	{
		c2.attack(name1);
		c1.takeDamage(c2.getAtkDmg());
		std::cout << c1.getName() <<" has " << c1.getHp() << " \033[38;5;70mHP \033[0m" << std::endl;
		
		c1.attack(name2);
		c2.takeDamage(c1.getAtkDmg());
		std::cout << c2.getName() <<" has " << c2.getHp() << " \033[38;5;70mHP \033[0m" << std::endl;
	}
	return(0);
}