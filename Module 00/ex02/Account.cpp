/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <trondani@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:50:44 by trondani          #+#    #+#             */
/*   Updated: 2023/04/04 12:15:43 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h> //Utilizzata su DISPLAY_TIME_STAMP
#include <iomanip>
#include <iostream>

/*
DEFINIZIONI INIZIALI:
Questa parte iniziale del codice definisce la classe Account e le sue relative
variabili e istanze della classe. Le quattro variabili che vengono 
inizializzate a 0, tengono traccia rispettivamente di: Numero totale di account
creati ; Il saldo totale ; Il totale dei depositi ; Il totale dei
prelievi. Queste variabili sono comuni a tutte le istanze della classe.

COSTRUTTORE Account::Account(int initial_deposit):
Il costruttore "Account::Account(int initial_deposit)" accetta un argomento
"initial_deposit" che rappresenta l'importo iniziale depositato nella creazione
dell'Account. Quando viene creato una nuova istanza, il costruttore assegna un
valore univoco all'attributo "_accountIndex" dell'istanza corrente, incrementa
la variabile "_totalAmount" e imposta a zero i contatori "_nbDeposits" e
"_nbWithdrawls". Infine, viene fatta una stampa dei dati.
Il costruttore "Account:Account(int initial_deposit)" serve a creare una nuova
istanza di Account. L'argomento "initial_deposit" rappresenta l'ammontare iniziale
depositato sul conto dell'oggetto appena creato. Nel costruttore vengono quindi
eseguite diverse operazioni:

-> Viene incrementato il contatore di oggetti Account, ovvero "_nbAccounts", per 
tenere traccia del numero totale di conti correnti istanziati.

-> Viene assegnato all'attributo "_accountIndex" il valore del contatore "_nbAccounts"
appena incrementato. Questo serve a identificare in modo univoco ogni istanza di Account.

-> Viene aggiunto l'importo del conto corrente specifico, rappresentato dalla varibile
"this->_amount". Si incrementa il valore della variabile "_totalAmount" di Account sommando
al suo valore attuale l'ammontare contenuto nell'istanza corrente di Account
(rappresentata dalla variabile membro this->_amount). In altre parole, ogni volta che
viene creata una nuova istanza, il valore della sua variabile "_amount" viene sommato 
alla variabile statica "_totalAmount", che rappresenta il saldo totale dei conti correnti
creati fino a quel momento. In questo modo, la classe Account tiene traccia dei saldi totali presenti
in tutti i suoi conti correnti.

-> Gli attributi "_nbDeposits" e "_nbWithdrawls" vengono inizializzati a 0, in quanto
il conto è appena stato creato e non ci sono stati ancora nè depositi nè prelievi.

-> Viene chiamata la funzione "_displayTimeStamp()" per stampare sullo STDOUT la data e l'ora
di creazione del conto corrente, insieme all'indice del conto corrente e all'ammontare del deposito
iniziale.

Il costruttore quindi, si occupa di inizializzare le variabili membro dell'istanza dell'oggetto Account
attuale, incrementarne i contatori di conti correnti e importi totali, e stampare su STDOUT una 
descrizione del conto appena creato.

THIS->:
"this->" è un puntatore implicito alla classe che viene utilizzato per fare riferimento
all'istanza dell'oggetto corrente. In pratica, viene utilizzato per distinguere le variabili 
di un oggetto dalle variabili locali o dai parametri della funzione che hanno lo stesso nome.
Ad esempio, se una classe ha una variabile "_amount" e una funzione ha una parametro "amount", 
possiamo utilizzare "this->_amount" per riferirci alla variabile della classe e "amount" per
riferirci al parametro della funzione.
*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = this->_nbAccounts++;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << initial_deposit << ";";
	std::cout << "created" << std::endl;
}

/*
Questa parte riguarda la definizione del costruttore di default
e del distruttore della classe Account.

-> Il costruttore di default viene chiamato quando viene creato un oggetto
Account senza specificare un valore per il deposito iniziale,
mentre il costruttore precedente lo si chiama quando si istanzia 
un oggetto Account con un importo iniziale specificato dall'argomento
"initial_deposit". Quindi la scelta di quale costruttore utilizzare dipende
dalle esigenze del programma. Se il programma richiede un'istanza di Account
con un importo iniziale specificato, allora utilizzerà il costruttore con il parametro
"initial_deposit". Se invece l'importo iniziale deve essere impostato a 0, allora 
utilizzerà il costruttore di default. In questo caso, il costruttore di default inizializza
l'oggetto con un saldo iniziale pari a 0. Come nel costruttore precedente, viene incrementato
il contatore "_nbAccounts" e viene assegnato un indice univoco all'account attuale.
Viene quindi effettuata una stampa. 

-> Il distruttore viene chiamato quando un oggetto Account viene distrutto, ovvero
quando viene eliminato dall'ambiente in cui è stato creato. In questo caso, il distruttore
decrementa il contatore "_nbAccounts" e stampa le info dell'account.
Il distruttore di una classe in C++ è un metodo speciale che viene chiamato
automaticamente quando un oggetto della classe viene eliminato, ad esempio quando la sua
utilità all'interno del programma termina. Il compito principale del distruttore è quello di
liberare la memoria allocata dinamicamente dall'oggetto, ad esempio eliminando eventuali puntatori
o array di puntatori, chiudendo file aperti, deallocando memoria dinamica ecc ecc. In generale,
il distruttore viene utilizzato per pulire l'oggetto e garantire che tutte le risorse utilizzate
dall'oggetto siano liberate correttamente.
*/

Account::Account(void)
{
	this->_accountIndex = this->_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:0;created\n";
}

Account::~Account(void)
{
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed\n";
}

/*
Metodi getter utilizzati anche nell'esercizio precedente, che restituiscono
i valori degli attributi di Account.
*/

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts); //Numero account creati
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount); //Somma di denaro depositata
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits); //Numero di depositi effettuati
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals); //Numero prelievi effettuati
}

/*
Account::_displayTimestamp():

Questa funzione privata di Account ha il compito di stampare l'ora attuale
formattata in un certo modo. In particolare, la funzione utilizza la libreria
"time.h" per ottenere l'ora attuale, la memorizza nella variabile "now" come tipo
"time_t" e poi la converte in una struct "tm" utilizzando la funzione "localtime()", 
sempre di "time.h". Successivamente viene creato un array di caratteri lungo 20 (buffer),
che viene utilizzato insieme alla funzione "strftime()" per formattare l'ora attuale
come una stringa. La stringa formattata viene poi stampata tramite l'uso
di "std::cout << buffer". La funzione "Account::_displayTimestamp()" è quindi utilizzata
per stampare l'ora attuale in un formato specifico.
*/

void Account::_displayTimestamp(void)
{
    time_t now = time(NULL);
    tm *timeinfo = localtime(&now);
    char buffer[20];
    strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

/*
Account::displayAccountsInfos(): 

Questa funzione è utilizzata per visualizzare le info di tutti gli account creati
finora. Utilizza le funzioni getter per otteneree le info
e le stampa su STDOUT insieme al timestamp.
*/

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

/*
Account::makeDeposit():

Questa parte di codice implementa il metodo makeDeposit della classe Account, che 
permette di effettuare un deposito su un account. Il metodo prende come
argomento un intero "deposit", che rappresenta l'ammontare del deposito
effettuato e poi esegue le seguenti operazioni:

-> Chiama displayTimestamp per stampare il timestamp dell'operazione.

-> Aggiunge l'ammontare del deposito al saldo corrente dell'account (Memorizzato
in "_amount") e aggiorna il totale dei saldi di tutti gli account (Memorizzato su
"_totalAmount").

-> Incrementa il contatore del numero dei depositi effettuati sull'account corrente
(Memorizzato su "_nbDeposits") e aggiorna il totale dei depositi di tutti gli account
(Memorizzato su "_totalNbDeposits").

-> Stampa il nuovo saldo dell'account corrente e il numero di depositi effettuati sull'account.

In questo modo, ogni volta che viene effettuato un deposito su un account, vengono aggiornati
sia il saldo dell'account che il totale dei saldi di tutti gli account, cosi come il numero
di depositi effettuati sull'account e il totale dei depositi di tutti gli account.
*/

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

/*
Account::makeWithdrawal():

Questa funzione viene chiamata quando si vuole prelevare denaro da un'istanza di Account.
Prende come parametro "withdrawal", che è l'importo che si vuole prelevare.
All'inizio, viene stampato il timestamp e l'indice dell'istanza dell'Account.
Viene anche stampato il saldo corrente prima del prelievo (p_amount).
Se l'importo di prelievo è maggiore del saldo corrente, il prelievo viene rifiutato
e viene restituito false. In caso contrario, l'importo viene sottratto dal saldo corrente
e viene incrementato il numero di prelievi effettuati da quell'istanza di Account.
Vengono anche aggiornati i contatori totali del numero di prelievi effettuati e del saldo totale.
Infine, viene stampato il saldo corrente aggiornato e il numero di prelievi effettuati
da quell'istanza di Account, e viene restituito true per indicare che il prelievo è stato effettuato con successo.
*/

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused\n";
		return (false);
	}
	std::cout << withdrawal << ";";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

/*
Account::displayStatus:

La funzione displayStatus stampa le informazioni sullo stato dell'account.
*/

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}












