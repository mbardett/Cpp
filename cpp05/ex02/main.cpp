/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/22 22:22:53 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
// #include "AForm.hpp"

int	main()
{
	Bureaucrat	b(1, "Bob");
	std::cout << "TEST	PROMOTING	RANK		1" << std::endl;
	ShrubberyCreationForm sForm("National Park");
	std::cout << sForm.getName() << "---"<< sForm.getToExec()<< "---"<< sForm.getToSign()<< "---"<< std::endl;
	sForm.execute(b);
	return (0);
}