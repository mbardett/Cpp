/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:06:54 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/20 22:25:44 by mbardett         ###   ########.fr       */
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
	
	while (c1.getHp() != 0 && c2.getHp() != 0)
	{
		c2.attack(name1);
		c1.takeDamage(c2.getAtkDmg());
		c1.attack(name2);
		c2.takeDamage(c1.getAtkDmg());
	}
	return(0);
}