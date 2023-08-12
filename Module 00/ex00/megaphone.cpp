/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:10:45 by trondani          #+#    #+#             */
/*   Updated: 2023/03/29 14:15:44 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
MEGAPHONE:
Prima controlla se sono stati passati la quanitá giusta di argomenti. Se non ci sono, il programma stampa
il messaggio di errore "LOUD AND...".
Per ogni argomento passato, il programma converte con "toupper" tutte le lettere in maiuscolo e le stampa.
Dopo la stampa degli argomenti, il programma stampa un newline con "endl".
La funzione "size()" restituisce il numero di caratteri della stringa e serve per ottenere la lunghezza di str.
*/

#include <iostream>

int main(int ac, char **av)
{
	if(ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		for (size_t j = 0; j < str.size(); j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << std::endl;
	return 0;
}