/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/17 17:17:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

// class Form;
class Bureaucrat;

class Form
{

	private:
		Form();
		const std::string _name;
		bool _signed;
		const int _toSign;
		const int _toExec;
	public:
		Form(std::string name, int toSign, int toExec);
		~Form();
		Form(const Form &source);
		Form &operator=(const Form &source);

		bool isSigned()const;
		std::string getName()const;
		int getToSign()const;
		int getToExec()const;
		void beSigned(const Bureaucrat &b);
		// As in the previous exercise, the subject leaves us no choice but
		//  to implement the exceptions here, as we are not allowed to submit other files
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("\033[38;5;202mForm Exception: grade too low\033[0m");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("\033[38;5;202mForm Exception: grade too high\033[0m");
				}
		};
	

};

std::ostream &operator<<(std::ostream &os, const Form &f);

#endif