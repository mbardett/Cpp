/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:20:12 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/05 18:25:03 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib>
# include <stack>
# include <queue>

class RPN
{
	private:
		std::stack<int> _executorStack;
	public:
		RPN( void );
		RPN( char *str );
		RPN( const RPN &src );
		RPN& operator=( const RPN &src );
		~RPN();
		int		solve( std::string exp );
		void	performOperation( std::stack<int> &stack, std::string c );
		class errorException : public std::exception
		{
			virtual const char* what() const throw() { return("Error"); };
		};
};

#endif