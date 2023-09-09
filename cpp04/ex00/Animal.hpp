/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:31:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/09 22:19:59 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &source);
		Animal &operator=(const Animal &source);
		virtual void makeSound()const;
		std::string getType()const;
		void setType(std::string type);
	protected:
		std::string _type;
};

#endif