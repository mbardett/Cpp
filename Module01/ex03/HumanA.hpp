/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:09:34 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 18:42:02 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanA(std::string _name,Weapon &club);
		~HumanA();
		void attack();
};

#endif