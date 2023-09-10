/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:33:13 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 18:43:13 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &source);
		Dog &operator=(const Dog &source);
		virtual void makeSound()const;
		std::string getType()const;
		void printIdeas();

	private:
		Brain *_brain;
};

#endif