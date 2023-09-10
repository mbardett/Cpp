/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:31:52 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 17:43:35 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

//from cppreference.com/w/cpp/language/destructor:
//Virtual destructors:
//Deleting an object through pointer to base invokes undefined behavior 
//unless the destructor in the base class is virtual:

class Cat : public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &source);
		Cat &operator=(const Cat &source);
		virtual void makeSound()const;
		std::string getType()const;
		void printIdeas();


	private:
		Brain *_brain;
};

#endif