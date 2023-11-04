/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:09:40 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/04 21:35:39 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <map>
# include <bits/stdc++.h>

class BitcoinExchange {
	
	private:
		std::map<std::string, double> _exchangeMap;

	public:
		BitcoinExchange();
		BitcoinExchange(const char *filename);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange& operator=(const BitcoinExchange &src);
		~BitcoinExchange();
		
		int		checkPair(std::string const &date, std::string const &value);
		void	exchange(const char *filename);
		typedef	std::map<std::string, double>::iterator iterator;
		class CannotOpenFile: public std::exception
		{
			public:
				const char* what() const throw() {return ("Error: could not open file.");}
		};
		class	DataError : public std::exception
		{
			public:
				const char* what() const throw() { return ("Error: incorrect, inconsistent, or corrupted Data set.");}
		};
		class	DataInvalidValue : public std::exception
		{
			public:
				const char* what() const throw() { return ("Error: invalid value in Data set.");}
		};
		class	InputError : public std::exception
		{
			public:
				const char* what() const throw() { return ("Error: incorrect, inconsistent, or corrupted Input file.");}
		};
};

#endif