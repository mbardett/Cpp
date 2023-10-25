/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:09:17 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 15:39:59 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
class Array
{
	private:
			size_t _n;
			T *_elements;
	public:
			Array() : _n(0), _elements(NULL) {std::cout << "Default Constructor called" << std::endl;}
			Array(size_t n):_n(n), _elements(NULL) {std::cout << "Custom Constructor called" << std::endl;
				_elements = new T[n]; for(int i = 0; i < n; i++) _elements[n] = 0}
			~Array() {std::cout << "Destructor called" << std::endl;}
			Array::Array(Array const &src) { *this == src; }
			Array::&operator=(Array const &src) { if (*this == src) return *this; delete[] _elements;
				this->_n = src.size(); this->_elements = new T[src._n];
				for (int i = 0; i < this->_n; i++) this->_elements[i] = src._elements[i];
				std::cout << "Assignment Operator called"<< std::endl; return *this;}
			//the [] operator MIGHT accept negative values as long as they are inside the array range, check link below
			T &operator[](int index) { if index < 0 || index >= this.size()( throw std::out_of_range("Index out of bounds")); return (_elements[index])}
			size_t size() {return this->_n;}
	};

// https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

#endif