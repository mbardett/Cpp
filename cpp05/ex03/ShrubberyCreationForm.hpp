/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 18:00:00 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;
class ShrubberyCreationForm;

class ShrubberyCreationForm : public AForm
{

	private:
		ShrubberyCreationForm();
		std::string _target;
	public:
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &source);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &source);
		std::string getTarget()const;
		void currentTask()const;
};

#endif