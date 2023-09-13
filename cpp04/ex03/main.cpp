/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/13 22:41:53 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "\033[38;5;70mCONSTRUCTORS\033[0m:" << std::endl;
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << "\033[38;5;70mCREATE MATERIA:\033[0m" << std::endl;
	AMateria	*tmp = NULL;
	AMateria	*tmp2 = NULL;
	AMateria	*tmp3 = NULL;
	AMateria	*tmp4 = NULL;
	
	tmp = src->createMateria("Cure");
	tmp2 = src->createMateria("Ice");
	tmp3 = src->createMateria("Cure");
	tmp4 = src->createMateria("Ice");
	me->equip(tmp);
	me->equip(tmp2);
	std::cout << "\033[38;5;70mUSE ON A NEW CHARACTER:\033[0m" << std::endl;
	ICharacter *bob = new Character("bob");
	me->use(1, *bob);
	me->use(0, *bob);
	me->use(3, *bob);
	std::cout << "\033[38;5;70mDEEP COPY VS SOURCE:\033[0m" << std::endl;
	Character	*charles = new Character("Charles");
	me->unequip(0);
	me->unequip(1);
	charles->equip(tmp3);
	charles->equip(tmp4);
	charles->use(0, *bob);
	charles->use(1, *me);
	charles->use(2, *bob);
	charles->use(3, *me);
	std::cout << "\033[38;5;70mUNEQUIP:\033[0m" << std::endl;
	me->unequip(-1);
	me->unequip(18);
	me->unequip(3);
	me->use(1, *charles);
	me->unequip(1);
	me->use(1, *charles);
	std::cout << "\033[38;5;70mDESTRUCTORS:\033[0m" << std::endl;
	delete bob;
	delete tmp2;
	delete tmp;
	src->freeSlots();
	delete charles;
	delete me;
	delete src;
	return (0);
}