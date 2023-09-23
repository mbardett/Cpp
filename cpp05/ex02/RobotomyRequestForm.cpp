/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:13:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:46:03 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
//this wont be used since it's private
RobotomyRequestForm::RobotomyRequestForm(): AForm("BlankRobotomy", 150, 150), _target("none")
{
	std::cout << "Default RobotomyRequestForm Constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "Robotomy Custom Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source): AForm(source.getName(), source.getToSign() ,source.getToExec()),_target(source.getTarget())
{
	std::cout << "Robotomy Copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &source)
{
	std::cout << "Robotomy assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

//the subject
void RobotomyRequestForm::currentTask() const
{
	int p = rand();
	std::cout << std::endl;
	std::cout << "-STARTING CURRENT TASK-" << std::endl;
	std::cout << "Bzzzzzz...Bzzzzzzzzzzzzz...Bzzzzzzzz"<< std::endl;
	if (p % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed T_T\033[38;5;51m'\033[0m" << std::endl;
	std::cout << "-ENDING CURRENT TASK-" << std::endl;
	std::cout << std::endl;
}
