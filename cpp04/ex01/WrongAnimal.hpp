/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:01:48 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 15:09:52 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal 
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &source);
		WrongAnimal &operator=(const WrongAnimal &source);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		std::string getType(void) const;
		void setType(std::string type);
	protected:
		std::string _type;
};

#endif