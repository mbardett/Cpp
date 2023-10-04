/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:13:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:45:40 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
//this wont be used since it's private
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("BlankShrubbery", 150, 150), _target("none")
{
	std::cout << "Default ShrubberyCreationForm Constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Shrubbery Custom Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source): AForm(source.getName(), source.getToSign() ,source.getToExec()),_target(source.getTarget())
{
	std::cout << "Shrubbery Copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
	std::cout << "Shrubbery assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

//the subject asks for treeS, enphasis on the plural, I added another tree but forgot to push to github,
//sorry but you'd better add at least another one :)
void ShrubberyCreationForm::currentTask() const
{
	std::cout << "-STARTING CURRENT TASK-" << std::endl;
	std::cout << std::endl;
	std::cout << "					\033[38;5;29m/\\			\033[0m"<< std::endl;
	std::cout << "				       \033[38;5;29m/  \\    		\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;29m/    \\    		\033[0m"<< std::endl;
	std::cout << "				     \033[38;5;29m/      \\    		\033[0m"<< std::endl;
	std::cout << "				    \033[38;5;29m/        \\   		\033[0m"<< std::endl;
	std::cout << "				    \033[38;5;29m/        \\   		\033[0m"<< std::endl;
	std::cout << "				    \033[38;5;29m/        \\   		\033[0m"<< std::endl;
	std::cout << "				    \033[38;5;29m/        \\   		\033[0m"<< std::endl;
	std::cout << "				    \033[38;5;29m/        \\   		\033[0m"<< std::endl;
	std::cout << "				   \033[38;5;29m/__________\\   	\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;130m|    |  		\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;130m|    |  		\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;130m|    |  		\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;130m|    |  		\033[0m"<< std::endl;
	std::cout << "				      \033[38;5;130m|    |  		\033[0m"<< std::endl;
	std::cout << "\033[38;5;28m\033[48;5;130\\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \033[0m"<< std::endl;

	std::cout << std::endl;
	std::cout << "-ENDING CURRENT TASK-" << std::endl;






}
// std::ostream &operator<<(std::ostream &os, const AForm &f)
// {
// 	os << "\033[38;5;8mForm registered under name-----> \033[0m" << f.getName() << std::endl;
// 	os << "\033[38;5;8mForm has already been signed---> \033[0m" << f.isSigned() << std::endl;	
// 	os << "\033[38;5;8mNeeded grade to sign it--------> \033[0m" << f.getToSign() << std::endl;
// 	os << "\033[38;5;8mNeeded grade to execute--------> \033[0m" << f.getToExec() << std::endl;
// 	return (os);
// }
