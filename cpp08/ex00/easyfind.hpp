/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:07:03 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/31 14:51:13 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <exception>

template <typename T>
int *easyfind(T cont, int num) 
{
	T it = std::find(cont.begin(), cont.end(), num);
	if (*it == cont.end() && it != num)
		throw std::exception("Error: easyfind: element not found")
	return *it;
}

#endif