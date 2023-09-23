/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:13:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:59:50 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :_name("Blank Form"), _signed(false), _toSign(150), _toExec(150)
{
	std::cout << "Blank Form Constructor called" << std::endl;
}


AForm::AForm(const AForm &source):_name(source._name), _signed(false), _toSign(source._toSign), _toExec(source._toExec)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	if (getToSign() > 150 || getToExec() > 150)
		throw AForm::GradeTooLowException();
	if (getToSign() < 1 || getToExec() < 1)
		throw AForm::GradeTooHighException();
	// if (this->_toSign > 150 || this->_toExec > 150)
	// 	throw Form::GradeTooLowException();
	// if (this->_toSign < 1 || this->_toExec < 1)
	// 	throw Form::GradeTooHighException();
}

AForm::~AForm()
{
	std::cout << "Form Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &source)
{
	if (this == &source)
		return *this;
	this->_signed = false;
	if (this->_toSign > 150 || this->_toExec > 150)
		throw AForm::GradeTooLowException();
	if (this->_toSign < 1 || this->_toExec < 1)
		throw AForm::GradeTooHighException();
	std::cout << "Form assignment operator called" << std::endl;
	return *this;
}

AForm::AForm(std::string name, int toSign, int toExec): _name(name), _signed(false), _toSign(toSign), _toExec(toExec)
{
	std::cout << "Form custom constructor called" << std::endl;
	if (getToSign() > 150 || getToExec() > 150)
		throw AForm::GradeTooLowException();
	if (getToSign() < 1 || getToExec() < 1)
		throw AForm::GradeTooHighException();
}

bool AForm::isSigned()const
{
	return (_signed);
}

std::string AForm::getName()const
{
	return (this->_name);
}

int AForm::getToSign()const
{
	return (this->_toSign);
}

int AForm::getToExec()const
{
	return (this->_toExec);
}


void AForm::beSigned(const Bureaucrat &b)
{
	try {
		if (b.getGrade() <= this->getToSign())
		{
			if (this->_signed == false)
			{
				this->_signed = true;
				// std::cout << b.getName()<< " joyfully signed form "<< this->getName() << std::endl;
			}
			else
				throw "No room nor need for additional signs!";
		}
		else
			throw AForm::GradeTooLowException();
	}
	catch (AForm::GradeTooLowException())
	{
		
	}
}

void	AForm::execute(const Bureaucrat &executor)const
{
	try{
		if(this->isSigned())
		{
			if (executor.getGrade() <= this->getToExec())
				this->currentTask();
			else
				throw AForm::GradeTooLowException();
		}
		else
			throw AForm::UnsignedException();
	}
	catch (GradeTooLowException &e)
	{
		std::cerr  << e.what() << std::endl;

	}
	catch (UnsignedException &e)
	{
		std::cerr  << e.what() << std::endl;
	}
}
// std::ostream &operator<<(std::ostream &os, const AForm &f)
// {
// 	os << "\033[38;5;8mForm registered under name-----> \033[0m" << f.getName() << std::endl;
// 	os << "\033[38;5;8mForm has already been signed---> \033[0m" << f.isSigned() << std::endl;	
// 	os << "\033[38;5;8mNeeded grade to sign it--------> \033[0m" << f.getToSign() << std::endl;
// 	os << "\033[38;5;8mNeeded grade to execute--------> \033[0m" << f.getToExec() << std::endl;
// 	return (os);
// }