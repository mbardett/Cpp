/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:37:46 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 17:47:51 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N > 0)
    {
        int i = 0;
        Zombie	*Horde = new Zombie[N];
		while (i < N)
		{
			Horde[i].setName(name);
			Horde[i].announce();
			i++;
		}
    
	std::cout << "\033[38;5;196mWARNING:all test subjects have escaped the lab\033[0m" << std::endl;
	std::cout << "\033[38;5;196mWARNING:all test subjects have escaped the lab\033[0m" << std::endl;
	std::cout << "\033[38;5;196mWARNING:all test subjects have escaped the lab\033[0m" << std::endl;
	return Horde;
	}
	return NULL;
}