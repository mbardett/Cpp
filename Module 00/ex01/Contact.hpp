/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:32:58 by trondani          #+#    #+#             */
/*   Updated: 2023/04/04 08:39:53 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Questi due "#define", insieme all' "#endif" in fondo, 
servono per evitare la definizione multipla della stessa classe. 
*/

#ifndef CONTACT_HPP
# define CONTACT_HPP 

# include <iostream> // Libreria I\O. Si usa per utilizzare "std::cout" e "std::endl".
# include <iomanip> // Libreria di formattazione. Si usa per utilizzare "std::setw".
# include <string> // Libreria di gestione delle stringhe. Si usa per utilizzare le stringhe all'interno della classe.

		/*
		SETW:
		Il metodo "setw" serve per impostare la larghezza del campo di output quando si utilizza
		ad esempio "std::cout". In pratica, questa funzione consente di impostare
		una larghezza fissa per una determinata porzione di testo in output, utilizzando
		caratteri di riempimento, come nel nostro caso il simbolo "|".
		Questo metodo non viene utilizzato qui, ma viene utilizzato nel main.cpp nella funzione SEARCH_CONTACT.
		Viene utilizzato in quel punto nel main per impostare la larghezza di ogni campo quando viene 
		stampato il nome del contatto cercato. Semplicemente, l'utilizzo "di std::setw" consente di
		formattare in modo uniforme e facilmente leggibile.
		*/

class Contact // Dichiarazione del tipo classe (Simil struttura in C).
{
		/*
		ENCAPSULATION:
		La logica alla base dell'encapsulation dei metodi get e set utilizzati qui
		è quella di proteggere i dati privati dalla classe stessa e di garantirne
		l'integrità. I metodi get sono utilizzati per accedere ai dati privati
		della classe, ma senza modificarli. Essi sono definiti come pubblici in 
		modo che altre parti del programma possano accedere ai dati, ma senza poterli
		modificare. Il valore restituito da un metodo get viene di solito utilizzato
		solo per consultazione (Tipo una stampa), non per la modifica diretta dei dati.
		I metodi set invece sono utilizzati per modificare i dati privati di una classe.
		Sono anch'essi definiti come pubblici, ma solo le funzioni set della classe
		specifica possono modificarne il valore (In questo caso solo i metodi set
		di Contact possono modificare i valori privati della classe Contact).
		In questo modo si garantisce che l'integrità dei dati venga mantenuta e che il
		loro valore possa essere modificato solo in modo controllato. In questa classe,
		per esempio, i metodi get e set sono definiti come pubblici, in modo che 
		possano accedere ai dati privati della classe. La sezione pubblica contiene
		quindi i metodi set per impostare i valori dei campi privati di Contact e i metodi
		get per restituire (Stampare) i valori dei campi privati. La sezione privata
		contiene invece gli attributi privati della classe. Questi attributi possono essere
		modificati solo tramite i metodi set di Contact definiti nella sezione pubblica,
		in modo da garantirne l'integrità.
		*/
		
		// CPP reference: Metodi is the new Funzioni / Attributi is the new Variabili - Dati.
	
	public:	// Sezione pubblica, in cui vengono definiti i metodi e gli attributi accessibili anche all'esterno della classe.
		void	setFirstName(std::string str); 
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setPhoneNumber(std::string str);
		void	setDarkestSecret(std::string str);

		std::string	getFirstName(void); 
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);

		void	printContactInfo(void); // Dichiarazione del metodo, che non prende in input alcun parametro e non restituisce alcun valore.
		
		/* 
		PRINT_CONTACT_INFO:
		Questo accade su "printContactInfo" perchè i dati da stampare sono già contenuti nell'istanza dell'oggetto Contact.
		La funzione non fa altro che accedere direttamente ai dati privati di Contact utilizzando le funzioni
		GET e quindi non ha bisogno di ricevere input. Inoltre la funzione non restituisce alcun valore perchè
		la sua unica finalità è quella di stampare le informazioni relative all'oggetto Contact e non quello di 
		produrre un risultato che potrebbe essere utilizzato da altre parti nel programma.
		*/

		/*
		ISTANZA DI UN OGGETTO:
		Quando si crea un oggetto a partire da una classe, si dice che si sta
		istanziando la classe, e l'oggetto risultante (In questo caso, Contact) è un'istanza di quella classe.
		Esempio: Contact definisce i dati di un contatto telefonico (Con diverse caratteristiche come il nome,
		il cognome ecc). Possiamo creare diverse istanze di questa classe, ovvero diversi contatti telefonici
		con caretteristiche diverse. Ogni istanza è un oggetto separato, con i propri valori.
		*/

	private: // Dichiarazione dei dati privati di Contact, 5 elementi di tipo stringa.
		std::string	_firstName; // Il simbolo "_" si usa come convenzione per riconoscere i dati privati di una classe.
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		/*
		DATI PRIVATI:
		Un dato privato è un dato accessibile solo dalla classe stessa e non da altre
		parti del programma. Ciò significa che solo i metodi (Funzioni) pubblici
		della classe possono accedere ai dati privati (In questo caso,
		solo le SET possono modificare il valore dei dati privati). Il motivo per cui si
		usano i dati privati è quello di impedire a funzioni a caso del programma
		di accedere o modificare direttamente i dati della classe,
		ma di farlo solo attraverso i metodi pubblici definiti dalla classe.
		In questo modo, si può controllare l'accesso e la modifica dei dati,
		garantendo la corretta esecuzione del programma. I dati privati possono 
		essere utilizzati solo all'interno della classe Contact e non sono
		accessibili direttamente dall'esterno della classe stessa. In altre parole,
		questi dati definiscono lo "status" o valore interno della classe Contact e vengono
		utilizzati dalle sue funzioni (Pubbliche) per fornire funzionalità specifiche.
		*/	
		
};
#endif