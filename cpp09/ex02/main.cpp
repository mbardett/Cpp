/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:53:38 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/05 20:45:56 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int argc, char **argv )
{
	try
	{
		if (argc < 3)
			throw std::invalid_argument("Invalid argument");
		PmergeMe	pme(argv);
		std::cout << "Before: ";
		pme.display();
		std::cout << "After: ";
		pme.sortContainers();
		pme.display();
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << pme.getVecTime() << " us" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << pme.getDeqTime() << " us" << std::endl;
	}
	catch( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}