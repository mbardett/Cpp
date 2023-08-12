/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:32:56 by trondani          #+#    #+#             */
/*   Updated: 2023/04/03 17:06:06 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Inclusione dell'interfaccia della classe Contact (File .hpp con dentro i metodi e attributi)
che contiene l'insieme delle sue definizioni\dichiarazioni pubbliche e private.
*/

#include "Contact.hpp" 

/*
FUNZIONI SET:
Qui si definiscono le funzioni SET, che prendono in pasto una stringa e
non restituiscono niente. Questo perchè la finalità delle SET è quella di
modificare il valore dei membri privati di Contact e vanno quindi a modificare
l'oggetto stesso creando un istanza di Contact. Infatti, il void indica che
la funzione si limita ad eseguire l'operazione di assegnamento.
*/

void	Contact::setFirstName(std::string str)
{
	_firstName = str; 
}
void	Contact::setLastName(std::string str)
{
	_lastName = str;
}
void	Contact::setNickname(std::string str)
{
	_nickname = str;
}
void	Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}
void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

/*
FUNZIONI GET:
Queste funzioni sono utilizzate per ottenere il valore degli attributi privati
dell'oggetto Contact. Le GET servono dunque per accedere alle variabili private
specifiche e ritornare il valore richiesto. Per questo motivo, dato che le GET
vengono usate solo per ottenere il valore di un attributo senza modificarlo,
non è necessario che prendano in pasto nulla ma che ritornino solamente
(In questo caso, una stringa).
*/

std::string	Contact::getFirstName(void)
{
	return (_firstName); 
}
std::string	Contact::getLastName(void)
{
	return (_lastName);
}
std::string	Contact::getNickname(void)
{
	return (_nickname);
}
std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}
std::string	Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}

/*
STAMPA:
La funzione "printContactInfo" è un metodo pubblico della classe Contact 
che stampa sullo standard output le informazioni di un contatto.
Questo metodo, essendo parte della classe Contact, può accedere ai dati
privati di Contact.
*/

void	Contact::printContactInfo(void)
{
	std::cout << "First Name:	" << _firstName << std::endl;
	std::cout << "Last Name:	" << _lastName << std::endl;
	std::cout << "Nickname:	" << _nickname << std::endl;
	std::cout << "Phone Number:	" << _phoneNumber << std::endl;
	std::cout << "Darkest Secret:	" << _darkestSecret << std::endl;
}