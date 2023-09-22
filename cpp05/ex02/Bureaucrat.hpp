/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:38:30 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/22 20:56:27 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
// #include <exception>
//in theory, such definition of a class is against the general rules for cpp modules,
//but in practice, since the subject demands for only Bureaucrat.cpp, hpp and main files,
//(and, not least, also because I got a bunch of errors until I defined the public members of 
// the what() member functions) this seems the only way to comply with the subject for this
//exercise
class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(int grade, const std::string &name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &source);
		Bureaucrat &operator=(const Bureaucrat &source);
		void setGrade(int grade);
		int getGrade()const;
		std::string const getName();
		void promote(int amount);
		void demote(int amount);
		class GradeTooLowException: public std::exception
		{
			public:
					virtual const char *what() const throw()
					{
						return ("\033[38;5;202mBureaucrat Exception: grade too low\033[0m");
					}
		};
		class GradeTooHighException: public std::exception
		{
			public:
					virtual const char *what() const throw()
					{
						return ("\033[38;5;202mBureaucrat Exception: grade too high\033[0m");
					}
		};
		void signForm(AForm &f);
		void executeForm(const AForm &f);
		
	private:
		int _grade;
		const std::string _name;
		
};

std::ostream &operator<<(std::ostream &os, Bureaucrat& b);



#endif
// from c++reference:
// std::exception::what
// virtual const char* what() const throw();
// (until C++11)
// virtual const char* what() const noexcept;
// (since C++11)
// Returns the explanatory string.