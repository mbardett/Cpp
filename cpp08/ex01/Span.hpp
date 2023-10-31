/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:22:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/31 22:46:06 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <list>
#include <exception>
#include <vector>
#include <iostream>

class Span
{
	private:
		size_t _maxSize;
		std::list<int> _myData;
	
	public:
		Span(size_t n);
		~Span();
		Span(const Span &src);
		Span &operator=(const Span &src);
		void addNumber(int n);
		void addNumber(std::list<int> newList);
		size_t shortestSpan();
		size_t longestSpan();
		size_t getMaxSize();
		std::list<int> getMyData();
		
};

#endif