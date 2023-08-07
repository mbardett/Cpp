/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:00:54 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/05 19:20:57 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Contact::setName(std::string str)
{
    _myName = str;
}

void    Contact::setSurname(std::string str)
{
    _mySurname = str;
}

void    Contact::setAlias(std::string str)
{
    _myAlias = str;
}

void    Contact::setNumber(std::string str)
{
    _myNumber = str;
}

void    Contact::setSecret(std::string str)
{
    _mySecret = str;
}

std::string Contact::getName()
{
    return (_myName);
}
std::string Contact::getSurname()
{
    return (_mySurname);
}
std::string Contact::getAlias()
{
    return (_myAlias);
}
std::string Contact::getNumber()
{
    return (_myNumber);
}
std::string Contact::getSecret()
{
    return (_mySecret);
}
void    Contact::printContactInfo()
{
    std::cout << "Name: " << _myName << std::endl;
    std::cout << "Surame: " << _mySurname << std::endl;
    std::cout << "Nickname: " << _myAlias << std::endl;
    std::cout << "Number: " << _myNumber << std::endl;
    std::cout << "Darkest Secret: " << _mySecret << std::endl;
}