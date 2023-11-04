/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:10:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/04 21:37:56 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//REMEMBER TO DELETE THE data.csv before pushing
int main(int argc, char *argv[])
{
	(void)argc;
	try
	{
		BitcoinExchange btc("data.csv");
		std::cout << "DIOBUBU" << std::endl;
		btc.exchange(argv[1]);
	}
	catch( std::exception const &e )
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
//REMEMBER TO DELETE THE data.csv before pushing
	return (0);
}