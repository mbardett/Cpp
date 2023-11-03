/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:40:53 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/03 20:44:07 by mbardett         ###   ########.fr       */
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

Span::Span( Span &src) : _maxSize(src.getMaxSize())
{
		this->_myData = src.getMyData();
		std::cout << "Span copy constructor called"<< std::endl;
}

size_t Span::getMaxSize()
{
	return (this->_maxSize);
}

std::list<int> Span::getMyData()
{
	return (this->_myData);
}

Span &Span::operator=( Span &src)
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

void Span::addNumber(int n)
{
	// std::cout <<"Adding number "<< n << std::endl;
	if (this->_myData.size() > this->getMaxSize())
		throw std::exception();
	else
		this->_myData.push_back(n);
	// std::cout <<"Addition completed" << std::endl;
	return;
}

void Span::addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end)
{
	// std::cout << "list size =" << this->_myData.size() << "DISTANCE = " <<std::distance(begin, end)<< "Maxsize= "<< this->getMaxSize()<<std::endl;
	if (this->_myData.size() + std::distance(begin, end) > this->getMaxSize())
		throw std::exception();
	else
		this->_myData.assign(begin, end);
	return;
}

size_t Span::shortestSpan()
{
	if (this->getMyData().size() < 2)
	{
		throw std::exception();
		return 0;
	}
	std::list<int> tmpCopy = getMyData();
	tmpCopy.sort();
	std::list<int>::iterator it = tmpCopy.begin();
	std::advance(it, 1);
	size_t minSpan = std::abs(*tmpCopy.begin() - *(it));
	for (it = tmpCopy.begin(); it != tmpCopy.end(); it++)
	{
		std::list<int>::iterator nIt = it;
		nIt++;
		if (std::abs(*it - *(nIt)) < minSpan)
			minSpan = std::abs(*it - *nIt);
	}
	return minSpan;
}
size_t Span::longestSpan()
{
	if (getMyData().size() < 2)
	{
		throw std::exception();
		return 0;
	}
	std::list<int> tmpCopy = getMyData();
	tmpCopy.sort();
	size_t maxSpan = *std::max_element(tmpCopy.begin(), tmpCopy.end()) - *std::min_element(tmpCopy.begin(), tmpCopy.end());
	return maxSpan;
}

