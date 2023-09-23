/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:31:01 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/23 19:29:14 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include <cstdlib>
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;
class RobotomyRequestForm;

class RobotomyRequestForm : public AForm
{

	private:
		RobotomyRequestForm();
		std::string _target;
	public:
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &source);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &source);
		std::string getTarget()const;
		void currentTask()const;
};

#endif