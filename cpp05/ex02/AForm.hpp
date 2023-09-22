/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/22 22:48:36 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class AForm
{

	protected:
		const std::string _name;
		bool _signed;
		const int _toSign;
		const int _toExec;
	public:
		AForm();
		AForm(std::string name, int toSign, int toExec);
		virtual ~AForm();
		AForm(const AForm &source);
		AForm &operator=(const AForm &source);

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
		void execute(const Bureaucrat &executor)const;
		void virtual currentTask()const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif