/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:29:52 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 17:52:01 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	// private:
	// 	std::string _type;
	public:
		Ice();
		~Ice();
		Ice(const Ice &source);
		Ice &operator=(const Ice &source);
		Ice(std::string const & type);
		std::string const &getType() const;
		AMateria *clone() const;
		void use(ICharacter& target);
};

#endif