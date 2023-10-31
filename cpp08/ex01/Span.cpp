/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:40:53 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/31 22:54:54 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(size_t n): _maxSize(n)
{
	std::cout << "Span constructor called, size is "<< n << std::endl;
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

Span::Span(const Span &src)
{
	
}

Span &Span::operator=(const Span &src)
{
	std::list<int> cpy_data = src.getMyData();
	if (this == &src)
		return *this;
	else
	{
		this->_maxSize = src.getMaxSize();
		this->_myData = std::list<int>(cpy_data);
	}
	return *this;
}

void addNumber(int n)
{}

void addNumber(std::list<int> newList)
{}

size_t shortestSpan()
{}
size_t longestSpan()
{}

size_t Span::getMaxSize()
{
	return (this->_maxSize);
}

std::list<int> Span::getMyData()
{
	return (this->_myData);
}