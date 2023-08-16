/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 22:18:29 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 22:29:12 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

	public:
		Harl(void);
		~Harl();

		void	complain(std::string level);

	private:
		typedef void(Harl::*to_func)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif