/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:24 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 17:53:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default \033[38;5;211mBrain\033[0m constructor called" << std::endl;
	setIdeas();
}

Brain::~Brain()
{
	std::cout << "Default \033[38;5;211mBrain\033[0m destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &source)
{
	if (this == &source)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = source._ideas[i];
	std::cout << "\033[38;5;211mBrain\033[0m copy operator called" << std::endl;
	return (*this);
}

Brain::Brain(const Brain &source)
{
	*this = source;
	std::cout << "\033[38;5;211mBrain\033[0m assignment operator called" << std::endl;
}

void Brain::setIdeas()
{
	std::cout << "This \033[38;5;211mBrain\033[0m had many ideas!" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = "food";
	}
}

std::string Brain::getIdeas(int index)
{
	return	this->_ideas[index];
}

void Brain::printIdeas()
{
	for (int i = 0; i < 99; i++)
	{
		std::cout << "This \033[38;5;211mBrain\033[0m is thinking about " << this->getIdeas(i) << " right now" << std::endl;
	}
}