/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:25:24 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:09 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	// private:
	// 	std::string _type;
	public:
		Cure();
		~Cure();
		Cure(const Cure &source);
		Cure &operator=(const Cure &source);
		Cure(const std::string &type);
		std::string const &getType() const;
		Cure *clone() const;
		void use(ICharacter& target);
};




#endif