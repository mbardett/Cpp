/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:38:18 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/16 22:26:12 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _grade(150), _name("Noob Bob")
{
	std::cout << "\033[38;5;51mBureaucrat constructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(int grade, const std::string &name) : _grade(grade), _name(name)
{
	if (_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 150;
	}
	else  if (_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 1;
	}
	std::cout << "\033[38;5;51mBureaucrat custom constructor called\033[0m" << std::endl;
}



Bureaucrat::~Bureaucrat()
{
	std::cout << "\033[38;5;51mBureaucrat destructor called\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): _grade(source._grade), _name(source._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
		this->_grade = 150;
	}
	else  if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
		this->_grade = 1;
	}
	// getName();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source)
{
	if (this != &source)
	{
		this->_grade = source._grade;
	}
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	this->getName();
	return (*this);
}

void Bureaucrat::setGrade(int grade)
{
	// std::cout << this->_name <<" 's grade set to " << grade << std::endl;
	this->_grade = grade;
}

int Bureaucrat::getGrade()
{
	// std::cout <<  this->_grade << std::endl;
	return (this->_grade);
}

std::string const Bureaucrat::getName()
{
	std::cout << "This one is called " << this->_name << std::endl;
	return (this->_name);
}

void Bureaucrat::promote(int amount)
{
	for (int i = 0; i < amount; i++)
	{
		if (this->_grade -1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->setGrade(this->getGrade() - 1);
	}
	std::cout << "\033[38;5;46m" << getName() << " just got promoted!(" << getGrade() << ")\0rr[0m" << std::endl;

}

void Bureaucrat::demote(int amount)
{
	for (int i = 0; i < amount; i++)
	{
		if (this->_grade +1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->setGrade(this->getGrade() + 1);
	}
	std::cout << "\033[38;5;221m" << getName() << " just got demoted!(" << getGrade() << ")\033[0m" << std::endl;

}

int Bureaucrat::checkGrade()
{
	try
	{
		if (getGrade() < 1)
		{
			std::cout << "HERE1" << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		else if (getGrade() > 150)
		{
			std::cout << "HERE2" << std::endl;
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch(GradeTooLowException &e)
	{
		std::cerr  << e.what() << std::endl;
		std::cout << "HERE3" << std::endl;
		return (-1);
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "HERE4" << std::endl;
		return (1);
	}
	std::cout << "HERE5" << std::endl;
	return(0);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
	std::cout << b.getName() <<" bureaucrat grade " << b.getGrade() <<std::endl;
	return (os);
}