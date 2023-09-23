/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:13:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:51:31 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//this wont be used since it's private
PresidentialPardonForm::PresidentialPardonForm(): AForm("BlankPardon", 150, 150), _target("none")
{
	std::cout << "Default PresidentialPardonForm Constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 72, 45), _target(target)
{
	std::cout << "Pardon Custom Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Pardon Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source): AForm(source.getName(), source.getToSign() ,source.getToExec()),_target(source.getTarget())
{
	std::cout << "Pardon Copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
	std::cout << "Pardon assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

//the subject
void PresidentialPardonForm::currentTask() const
{
	std::cout << std::endl;
	std::cout << "-STARTING CURRENT TASK-" << std::endl;
	std::cout << "Bzzzzzz...Bzzzzzzzzzzzzz...Bzzzzzzzz"<< std::endl;

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox!" << std::endl;

		std::cout << "Pardon failed T_T\033[38;5;51m'\033[0m" << std::endl;
	std::cout << "-ENDING CURRENT TASK-" << std::endl;
	std::cout << std::endl;
}
