/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:31:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 18:29:10 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

//Excerpts rom https://www.ibm.com/docs/en/zos/2.4.0?topic=only-abstract-classes-c
//An abstract class is a class that is designed to be specifically used as a base class.
//
//An abstract class contains at least one pure virtual function. You declare a pure virtual function
//by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.
//
//You cannot use an abstract class as a parameter type, a function return type, 
//or the type of an explicit conversion, nor can you declare an object of an abstract class.
//You can, however, declare pointers and references to an abstract class.
//Virtual member functions are inherited. A class derived from an abstract base class will 
//also be abstract unless you override each pure virtual function in the derived class.
//Note that you can derive an abstract class from a nonabstract class, 
//and you can override a non-pure virtual function with a pure virtual function.
// You can call member functions from a constructor or destructor of an abstract class. However,
// the results of calling (directly or indirectly) a pure virtual function from its constructor are undefined. 


class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &source);
		Animal &operator=(const Animal &source);
		virtual void makeSound()const = 0;
		std::string getType()const;
		void setType(std::string type);
	protected:
		std::string _type;
};

#endif