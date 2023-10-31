/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:07:03 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/31 22:05:47 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <list>
#include <exception>
#include <vector>
#include <iostream>
template <typename T>
std::vector<int>::const_iterator easyfind(T cont, int num) 
{
	std::vector<int>::const_iterator iter;
	// std::cout << "BACK IS "<< cont.back() << std::endl;
	for (iter = cont.begin(); iter != cont.end(); iter++)
	{
		if (*iter == num){
			return iter;
		}
	}
	return iter;
}
#endif