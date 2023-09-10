/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:29:52 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 22:30:35 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string _type;
	public:
		Ice();
		~Ice();
		Ice(const Ice &source);
		Ice &operator=(const Ice &source);
		std::string const &getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
};

#endif