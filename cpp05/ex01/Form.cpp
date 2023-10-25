/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:13:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 15:03:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Blank Form"), _signed(false), _toSign(150), _toExec(150)
{
	// this->_name = "Blank Form";
	// this->_signed = false;
	// this->_toSign = 150;
	// this->_toExec = 150;
	std::cout << "Blank Form Constructor called" << std::endl;
}


Form::Form(const Form &source):_name(source._name), _signed(false), _toSign(source._toSign), _toExec(source._toExec)
{
	std::cout << "Form Copy Constructor called" << std::endl;
	if (getToSign() > 150 || getToExec() > 150)
		throw Form::GradeTooLowException();
	if (getToSign() < 1 || getToExec() < 1)
		throw Form::GradeTooHighException();
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(const Form &source)
{
	if (this == &source)
		return *this;
	this->_signed = false;
	if (this->_toSign > 150 || this->_toExec > 150)
		throw Form::GradeTooLowException();
	if (this->_toSign < 1 || this->_toExec < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form assignment operator called" << std::endl;
	return *this;
}

Form::Form(std::string name, int toSign, int toExec): _name(name), _signed(false), _toSign(toSign), _toExec(toExec)
{
	std::cout << "Form custom constructor called" << std::endl;
	if (getToSign() > 150 || getToExec() > 150)
		throw Form::GradeTooLowException();
	if (getToSign() < 1 || getToExec() < 1)
		throw Form::GradeTooHighException();
}

bool Form::isSigned()const
{
	return (_signed);
}

std::string Form::getName()const
{
	return (this->_name);
}

int Form::getToSign()const
{
	return (this->_toSign);
}

int Form::getToExec()const
{
	return (this->_toExec);
}


void Form::beSigned(const Bureaucrat &b)
{
	try {
		if (b.getGrade() <= this->getToSign())
		{
			if (this->_signed == false)
			{
				this->_signed = true;
			}
			else
				throw "No room nor need for additional signs!";
		}
		else
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException())
	{
		
	}
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "\033[38;5;8mForm registered under name-----> \033[0m" << f.getName() << std::endl;
	os << "\033[38;5;8mForm has already been signed---> \033[0m" << f.isSigned() << std::endl;	
	os << "\033[38;5;8mNeeded grade to sign it--------> \033[0m" << f.getToSign() << std::endl;
	os << "\033[38;5;8mNeeded grade to execute--------> \033[0m" << f.getToExec() << std::endl;
	return (os);
}
