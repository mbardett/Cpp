/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:17:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 18:13:18 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int  n = 0;
    int	i = 0;
	std::string input;
    std::cout << "insert number of desidered test subjects" << std::endl;
    std::cin >> input;
    while ((unsigned long)i < input.size())
	{
		if (!isdigit(input[i]))
		{
			std::cout << "test suspended, next time please insert only numbers" << std::endl;
			break;
		}
		i++;
	}
	if ( (unsigned long)i != (unsigned long)input.size())
		return (1);
	n = atoi(input.c_str());
	Zombie *horde;
	horde = zombieHorde(n, "subject");
	delete[] horde;
    return (0);
}