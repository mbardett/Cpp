/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:13:04 by trondani          #+#    #+#             */
/*   Updated: 2023/04/03 17:27:30 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Funzione che stampa la lista dei comandi all'utente.
void	helpMe(void)
{
	std::cout << "\nDon't panic!\n\nUse these commands:\n\n";
	std::cout << "\tADD:\tAdd a new contact.\n";
	std::cout << "\tSEARCH:\tDisplay a specific contact.\n";
	std::cout << "\tEXIT:\tQuit program.\n\n";
}

/*
FUNZIONE BAD_CONTACT:
Questa funzione viene chiamata quando la funzione "addNewContact" non riceve un
input valido. In questo caso, la funzione reimposta i campi vuoti con valori vuoti ("")
per evitare che i campi precedentemente inseriti siano utilizzati erroneamente.
In questo caso, "phonebook->contacts" è l'indice del nuovo contatto non valido
nell'array di contatti "phonebook->phonebook". In questo modo, i campi vuoti non
verranno utilizzati erroneamente e l'utente verrà obbligato a riutilizzare ADD.
*/

void	badContact(PhoneBook *phonebook)
{
	std::cout << "Field empty!\n\n";
	phonebook->phonebook[phonebook->contacts].setFirstName("");
	phonebook->phonebook[phonebook->contacts].setLastName("");
	phonebook->phonebook[phonebook->contacts].setNickname("");
	phonebook->phonebook[phonebook->contacts].setPhoneNumber("");
}

/*
FUNZIONE ADD_NEW_CONTACT:
Questa funzione permette di aggiungere un nuovo contatto.
Inizialmente viene richiesto all'utente di inserire tutti i campi
del contatto tramite le "getline". La "getline" legge l'intera riga
inserita dall'utente e viene poi salvata nella struttura
"phonebook->phonebook[phonebook->contacts]" tramite le funzioni
SET della classe Contact. Prima di salvare ogni valore, viene effettuato
un controllo sulla lunghezza dell'input inserito. Se la lunghezza è 0,
significa che il campo è vuoto (E ritorna 1).
Infine viene incrementato il contatore "phonebook->contacts" che indica
quanti contatti sono stati inseriti. Viene quindi controllato se è
stato raggiunto il massimo numero di contatti tramite l'ultimo if,
utilizzando "phonebook->max_contacts".
*/

int	addNewContact(PhoneBook *phonebook)
{
	std::string	input;

	std::cout << "Please fill ALL fields!\n";
	std::cout << "First Name: ";
	getline(std::cin, input);
	if (!input.length())
		return(1);
	phonebook->phonebook[phonebook->contacts].setFirstName(input);
	std::cout << "Last Name: ";
	getline(std::cin, input);
	if (!input.length())
		return (1);
	phonebook->phonebook[phonebook->contacts].setLastName(input);
	std::cout << "Nickname: ";
	getline(std::cin, input);
	if (!input.length())
		return (1);
	phonebook->phonebook[phonebook->contacts].setNickname(input);
	std::cout << "Phone Number: ";
	getline(std::cin, input);
	if (!input.length())
		return (1);
	phonebook->phonebook[phonebook->contacts].setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	getline(std::cin, input);
	if (!input.length())
		return (1);
	phonebook->phonebook[phonebook->contacts].setDarkestSecret(input);
	std::cout << "Contact added successfully!\n\n";
	phonebook->contacts++;
	if (phonebook->max_contacts < phonebook->contacts)
		phonebook->max_contacts = phonebook->contacts;
	return (0);
}

/*
FUNZIONE TRUNC_STRING:
Questa funzione prende in pasto una stringa e la tronca a una lunghezza
massima di 10 caratteri, aggiungendo un punto alla fine per indicare che la stringa
è stata abbreviata.
*/

std::string	truncString(std::string str)
{
	if (str.length() <= 10)
		return (str);
	return (str.substr(0, 9) + ".");
}

/*
FUNZIONE SEARCH_CONTACT:
Questa funzione consente di cercare un contatto all'interno della rubrica, visualizzando
un elenco di tutti i contatti disponibili e richiedendo all'utente di selezionare il contatto
specifico tramite un indice numerico. Se l'input è valido, viene utilizzata la funzione
"printContactInfo" per accedere alle informazioni del contatto corrispondente.
Altrimenti viene stampato un messaggio di errore.
*/

void	searchContact(PhoneBook *phonebook)
{
	std::string	input;

	for (int i = 0; i < phonebook->max_contacts; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncString(phonebook->phonebook[i].getFirstName());
		std::cout << "|" << std::setw(10) << truncString(phonebook->phonebook[i].getLastName());
		std::cout << "|" << std::setw(10) << truncString(phonebook->phonebook[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Select a contact by index: ";
	getline(std::cin, input);
	if (input.length() == 1 && ('0' < input[0] && input[0] < '9')
		&& (input[0]-49 < phonebook->contacts))
		phonebook->phonebook[input[0] - '0' - 1].printContactInfo();
	else
		std::cout << "Invalid index!\n\n";
}

//MAIN

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;
	int			run = 1;

	phonebook.contacts = 0;
	phonebook.max_contacts = 0;
	while (run)
	{
		std::cout << "Awaiting input: ";
		getline(std::cin, cmd);
		if (cmd == "EXIT")
			run = 0;
		else if (cmd == "ADD")
		{
			if (phonebook.contacts >= 8) // Qui avviene la sovrascrittura dell'eventuale nuovo contatto nel caso in cui la rubrica fosse già piena.
				phonebook.contacts = 0; // Se la variabile contacts è maggiore di 8, viene resettata a 0. Vuol dire che il nuovo contatto verrà inserito al posto del primo e cosí via con i successivi.
			if (addNewContact(&phonebook))
				badContact(&phonebook);
		}
		else if (cmd == "SEARCH")
		{
			if (!phonebook.contacts)
				std::cout << "The phonebook is empty!\n";
			else
				searchContact(&phonebook);
		}
		else
			helpMe();			
	}
}
