/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:18:27 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 16:02:17 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// int main(void)
// {
// 	Harl        harl;
// 	std::string input;
	
// 	// std::cout << "Once You've heard enough complainings just type EXIT." << std::endl;
// 	do {
// 		std::cout << "Input difficulty level, DEBUG, INFO, WARNING or ERROR" << std::endl;
// 		std::cout << "Once You've heard enough complainings just type EXIT." << std::endl;
// 		std::cin >> input;
// 		if (std::cin.eof()) {
// 			return (1);
// 		}
// 		harl.complain(input);
// 	} while (input.compare("EXIT"));
// 	return 0;
// }

int	main(int argc, char *argv[])
{
	std::string input;
	if (argc != 2)
	{
		std::cout << "\033[38;5;160m WRONG NUMBER OF ARGUMENTS\033[0m" << std::endl;
		exit(EXIT_FAILURE);
	}
	input = argv[1];
	Harl *harl =  new Harl();
	harl->complain(input);
	delete (harl);
	return (0);
	
}