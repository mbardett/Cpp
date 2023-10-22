/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:09:17 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/22 18:20:27 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		size_t _n;
		T *_elements;
	public:
		Array();
		Array(size_t n):_n(n);
		~Array();
		Array::Array(Array const &src);
		Array::&operator=(Array const &src);
		size_t size() {return this->_n;}
	};




#endif