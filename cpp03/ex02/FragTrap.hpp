/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:00:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/05 18:01:31 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

class FragTrap : public ClapTrap
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &source);
		virtual ~FragTrap();

		FragTrap &operator=(const FragTrap &source);
		void highFivesGuys();
};

#endif