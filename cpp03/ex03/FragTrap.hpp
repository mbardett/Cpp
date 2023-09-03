/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:00:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/03 21:26:31 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
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