/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:22:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/03 18:46:00 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <list>
#include <exception>
#include <vector>
#include <iostream>
#include <iterator>

class Span
{
	private:
		size_t _maxSize;
		std::list<int> _myData;
	
	public:
		Span(size_t n);
		~Span();
		Span( Span &src);
		Span &operator=( Span &src);
		void addNumber(int n);
		void addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end);
		size_t shortestSpan();
		size_t longestSpan();
		size_t getMaxSize();
		std::list<int> getMyData();
		
};

#endif