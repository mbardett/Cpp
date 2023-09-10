/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:33 by mbardett          #+#    #+#             */
/*   Updated: 2023/09/10 16:44:45 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &source);
		Brain &operator=(const Brain &source);
		std::string getIdeas(int index);
		void setIdeas();
		void printIdeas();
	
	private:
		std::string _ideas[100];
};

#endif