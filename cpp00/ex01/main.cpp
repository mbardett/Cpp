/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:22:50 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/07 22:05:37 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    PhoneBook phonebook;
	phonebook.contacts = 0;
    std::string str;
    int mode = 1;
    while (1)
    {
        std::cout << "digit ADD,SEARCH or EXIT" <<std::endl;
        if (mode == 1)
            getline(std::cin, str);
        if (str == "ADD")
        {
            if (phonebook.contacts > 7)
                phonebook.contacts = 0;
            mode = 0;
            phonebook.addContact();
            mode = 1;
        }
        else if (str == "SEARCH")
        {
            if (phonebook.phonebook[0].getName().size() < (unsigned int)1)
            {
                std::cout << "\033[38;5;160mthe phonebook is empty!\033[0m"<< std::endl;
            }
            else
            {
                mode = 0;
                phonebook.findContact();
                mode = 1;
            }
        }
        else if (str == "EXIT")
            break ;
        else if (mode == 1 && (str != "ADD\n" || str != "SEARCH\n" || str != "EXIT\n"))
        {
            std::cout << "WRONG INPUT, PLEASE TRY AGAIN" << std::endl;
        }
    }
    return (0);
}