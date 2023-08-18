/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:18:32 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/18 15:59:43 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl() {
	return ;
}

void Harl::complain(std::string level) {
	
	int i = 0;
	std::string levels[]= {"DEBUG", "INFO", "WARNING", "ERROR"};
	to_func func[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error   
	};
	
	while (i < 4 && levels[i].compare(level))
		i++;
	if (i < 4)
	{
		while (i < 4)
			(this->*func[i++])();
	}
	else
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	return ;
}

void Harl::debug(void) {
	std::cout << "\033[38;5;70mI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\033[0m" << std::endl;
	return ;
}

void Harl::info(void) {
	std::cout << "\033[38;5;211mI cannot believe adding extra bacon costs more money. You didn’t put";
	std::cout << " enough bacon in my burger! If you did, I wouldn’t be asking for more!\033[0m" << std::endl;
	return ;
}

void Harl::warning(void) {
	std::cout << "\033[38;5;202mI think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << " years whereas you started working here since last month.\033[0m" << std::endl;
	return ;
}

void Harl::error(void) {
	std::cout << "\033[38;5;160mThis is unacceptable! I want to speak to the manager now.\033[0m" << std::endl;
	return ;
}