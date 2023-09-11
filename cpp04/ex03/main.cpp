/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:51 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/11 20:01:46 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	// MateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;
		std::cout << std::endl;
	std::cout << "CONSTRUCTORS:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "CREATE MATERIA:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	// AMateria	*tmp;
	
	// AMateria	*tmp1;
	// AMateria	*tmp2;
	// AMateria	*tmp3;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp1 = src->createMateria("cure");
	// me->equip(tmp1);
	// tmp = src->createMateria("fire"); // null
	// me->equip(tmp);
	// std::cout << std::endl;

	std::cout << "USE ON A NEW CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;
	me->use(2, *bob);
	// me->use(4, *bob);
	// me->use(18, *bob);
	std::cout << std::endl;

	std::cout << "DEEP COPY CHARACTER:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	Character	*charles = new Character("Charles");
	// tmp2 = src->createMateria("cure");
	// charles->equip(tmp2);
	// tmp3 = src->createMateria("ice");
	// charles->equip(tmp3);
	// tmp = src->createMateria("earth");
	// charles->equip(tmp);
	Character	*charles_copy = new Character(*charles);
	std::cout << std::endl;

	std::cout << "DEEP COPY VS SOURCE:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	charles->unequip(0);
	charles_copy->unequip(1);
	// tmp = src->createMateria("cure");
	// charles_copy->equip(tmp);
	// tmp = src->createMateria("ice");
	// charles_copy->equip(tmp);
	std::cout << std::endl;

	charles->use(0, *bob);
	charles->use(1, *bob);
	charles->use(2, *bob);
	charles->use(3, *bob);
	std::cout << std::endl;
	charles_copy->use(0, *bob);
	charles_copy->use(1, *bob);
	charles_copy->use(2, *bob);
	charles_copy->use(3, *bob);
	std::cout << std::endl;
	std::cout << "UNEQUIP:" << std::endl;
	std::cout << "-----------------------" << std::endl;
	me->unequip(-1);
	me->unequip(18);
	me->unequip(3);
	std::cout << std::endl;
	me->use(1, *charles);
	me->unequip(1);
	me->use(1, *charles);
	std::cout << std::endl;
	std::cout << "DESTRUCTORS:" << std::endl;
	delete bob;
	delete me;
	src->freeSlots();
	delete src;
	delete charles;
	delete charles_copy;
	return (0);
}