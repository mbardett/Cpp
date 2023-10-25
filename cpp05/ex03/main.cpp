/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 17:48:18 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
// #include "AForm.hpp"

int	main()
{

	Intern	l;
	AForm*	n;
	
	std::cout << "TEST CORRECT FORM CREATION " << std::endl;
	std::cout << std::endl;
	n = l.makeForm("ShrubberyCreationForm", "my target");
	ShrubberyCreationForm z("NationalPark");
	Bureaucrat b(1, "Bob IV");
	b.executeForm(z);
	std::cout << "This stupid Intern just created"<< n->getName() << std::endl;
	delete n;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "TEST INCORRECT FORM CREATION " << std::endl;
	n = l.makeForm("Non-existent", "my target");
	delete n;
	return (0);
}