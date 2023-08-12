/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:33:08 by trondani          #+#    #+#             */
/*   Updated: 2023/03/29 14:40:17 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact	phonebook[8];
		int	contacts;
		int	max_contacts;
};

/*
Non serve un PhoneBook.cpp perchè non ci sono metodi che 
vanno a modificare direttamente i dati di PhoneBook.hpp.
Gli attributi presenti qui dentro sono dati che verranno
utilizzati direttamente dalle funzioni nel main.cpp.
Infatti le "regole cpp" ci impongono di separare
la dichiarazione dell'interfaccia di una classe (Dichiarazione
dei metodi e attributi pubblici / privati) dall'utilizzo 
effettivo dei metodi di una classe. La dichiarazione dell'
interfaccia andrà sempre fatta nel file .hpp, mentre l'utilizzo
effettivo dei rispettivi metodi andrà scritto nel rispettivo file
.cpp, come accade infatti con Contact.
*/