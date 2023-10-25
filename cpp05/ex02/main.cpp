/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 15:09:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
// #include "AForm.hpp"

int	main()
{
	Bureaucrat	b(1, "Bob");
	std::cout << "TEST	PROMOTING	RANK		1" << std::endl;
	ShrubberyCreationForm sForm("National Park");
	std::cout << sForm.getName() << "---"<< sForm.getToExec()<< "---"<< sForm.getToSign()<< "---"<< std::endl;
	b.signForm(sForm);
	sForm.execute(b);
	RobotomyRequestForm roboForm("Captain Obvious");
	b.signForm(roboForm);
	for (int i = 0; i < 4; i++)
		roboForm.execute(b);
	PresidentialPardonForm pardon("Mauro");
	pardon.execute(b);
	b.signForm(pardon);
	pardon.execute(b);
	return (0);
}