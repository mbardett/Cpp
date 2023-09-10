/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:01:04 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 22:57:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	public:
		Character();
		~Character();
		Character(const Character &source);
		Character &operator=(const Character &source);
		
		Character(std::string name);
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		
	private:
		std::string _name;
		AMateria *_slots[4];
};


#endif