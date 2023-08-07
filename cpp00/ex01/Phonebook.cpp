/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:34:44 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/07 21:30:51 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//std:string.size() and std::string.length() are exactly the same function.
std::string PhoneBook::capString(std::string str)
{
    if (str.size() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
    
}

int    PhoneBook::addContact()
{
	int	i = 0;
    std::string str;
    std::cout << "\033[38;5;46m insert name, surname, nickname, number and secret\033[0m\n";
	getline(std::cin, str);
	if (!str.size())
		return (1);
	this->phonebook[contacts].setName(str);
	getline(std::cin, str);
	if (!str.size())
		return (1);
	this->phonebook[contacts].setSurname(str);
	getline(std::cin, str);
	if (!str.size())
		return (1);
	this->phonebook[contacts].setAlias(str);
	getline(std::cin, str);
	if (!str.size())
		return (1);
	while ((unsigned long)i < str.size() && isdigit(str[i]))
			i++;
	if ((unsigned long)i != str.size())
	{
		std::cout << "\033[38;5;160merror, cannot accept non digit values \033[0m" << std::endl;
		return (1);
	}
	this->phonebook[contacts].setNumber(str);
	getline(std::cin, str);
	if (!str.size())
		return (1);
	this->phonebook[contacts].setSecret(str);
	PhoneBook::contacts++;
	return (0);
}

int	PhoneBook::findContact()
{
	int	i = 0;
	std::string str;

	while (i < MAX_CONTACTS && this->phonebook[i].getName().size() > 0)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->capString(this->phonebook[i].getName());
		std::cout << "|" << std::setw(10) << this->capString(this->phonebook[i].getSurname());
		std::cout << "|" << std::setw(10) << this->capString(this->phonebook[i].getAlias());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "\033[38;5;46minsert contact index \033[0m\n";
	getline(std::cin, str);
	if (str.size() == 1 && (str[0] >= '0' && str[0] < '9') && str[0] - 48 <= this->contacts)
		this->phonebook[str[0] - '0'].printContactInfo();
	else
	{
		std::cout << "\033[38;5;160mwrong index, try again \033[0m\n";
		std::cout << i  <<std::endl;
	}
	return (0);
}