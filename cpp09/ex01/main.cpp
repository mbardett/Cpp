/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:25:31 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/05 18:27:56 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv )
{
	try
	{
		if (argc != 2)
			throw std::invalid_argument("Error");
		RPN rpn(argv[1]);
	}
	catch( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}