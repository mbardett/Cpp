/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:43:10 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 18:18:35 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &source);
		MateriaSource &operator=(const MateriaSource &source);
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
		int freeSlots();
	
	private:
		AMateria *_slots[4];
		
};

#endif