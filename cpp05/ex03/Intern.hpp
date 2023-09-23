/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:44:25 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 22:17:29 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &source);
		Intern &operator=(const Intern &source);
		AForm *makeForm(std::string name, std::string target);
		//public, because you can call an Intern anyway you want!
		std::string name;
		class NoMorePaperException: public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("Oh no!, it seems we are out of printing papers!");
			}
		};
	private:
	//to do a proper cleaning before going home,
	//hiding from the Boss all the papers we used
	//we would need an array, with its index, for each type 
	// of form the Intern knows because we can't declare an array 
	//of an abstract class AForm and neither a generic void[100]
	//where to store all the forms each Intern prints. Another solution
	//(maybe not subject compliant), might be to define another Form class, 
	//deriving from AForm, and making our 3 form-classes derive from it; 
	// at that point it should be possible to store each form in an array and 
	//then clean automatically everything upon destruction call;
	//but lazyness won and we are going to delete everything inside main

	
	//to keep note of already known forms
	static std::string const _knownForms[3];
};

#endif