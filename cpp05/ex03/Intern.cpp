/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:02:30 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 22:23:21 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//another option to store the names of the forms could have been ENUM
	std::string const Intern::_knownForms[3] = {
	"ShrubberyCreationForm",
	 "RobotomyCreationForm", 
	 "PresidentialPardonForm"};

Intern::Intern():name("Random Intern")
{
	std::cout << "A \033[38;5;51mnew Intern\033[0m appeared!" << std::endl;
}

Intern::~Intern()
{
	std::cout << "\033[38;5;195mAnother Intern destroyed, he was so young!\033[0m" << std::endl;
}

Intern::Intern(const Intern &source)
{
	std::cout << "Intern copy operator called" << std::endl;
	*this = source;
}

Intern &Intern::operator=(const Intern &source)
{
	std::cout << "Intern assignment operator called"<< std::endl;
	if (this == &source)
		return *this;
	return *this;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		if (this->_knownForms[i] == name)
			break;
	}
	switch(i)
	{
		case(0):
			return (new ShrubberyCreationForm(target));
		case (1):
			return (new RobotomyRequestForm(target));
		case (2):
			return (new PresidentialPardonForm(target));
		default:
		//the subject demands an error, not an exception
			std::cerr << "Error:This Intern can't do no $##t!"<< std::endl;
	}
	return (NULL);
}

