/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:05:14 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 23:07:04 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

//same as in ICharacter.hpp
class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &source);
		AMateria &operator=(const AMateria &source);
		AMateria(const std::string &type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif