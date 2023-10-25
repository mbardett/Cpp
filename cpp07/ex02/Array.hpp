/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:09:17 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 22:32:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>
# include <stdlib.h>
# include <string>
# include <limits>
# include <iomanip>
# include <cstdlib>
# include <numeric>
# include <complex>

template <typename T>
class Array
{
	private:
			size_t _n;
			T *_elements;
	public:
			Array() : _n(0), _elements(NULL) {std::cout << "Default Constructor called" << std::endl;}
			Array(size_t n):_n(n), _elements(NULL) {std::cout << "Custom Constructor called" << std::endl;
				_elements = new T[n]; for(size_t i = 0; i < n; i++) _elements[n] = 0;}
			~Array() {std::cout << "Destructor called" << std::endl;}
			Array<T>(const Array  &src) { *this == src; }
			Array<T> &operator=(const Array<T> &src) { if (this == &src) return *this; delete[] _elements;_n = src.size(); _elements = new T[src._n];
					for (size_t i = 0; i < this->_n; i++)
						this->_elements[i] = src._elements[i];
					std::cout << "Assignment Operator called"<< std::endl; return *this;}
			//the [] operator MIGHT accept negative values as long as 
			//they are inside the array range, check link below.
			T &operator[](size_t index) { if (index < 0 || index >= size())( throw std::out_of_range("Index out of bounds")); return (_elements[index]);}
			size_t size() const {return (_n);}
			void addToArray(T value, size_t index) { if (index >= size()) throw std::out_of_range("Index out of bounds");_elements[index] = value;}
	};

// https://www.geeksforgeeks.org/overloading-subscript-or-array-index-operator-in-c/

#endif