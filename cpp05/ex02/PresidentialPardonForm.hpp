/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:48:43 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
#include <cstdlib>
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;
class PresidentialPardonForm;

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm();
		std::string _target;
	public:
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &source);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &source);
		std::string getTarget()const;
		void currentTask()const;
};

#endif