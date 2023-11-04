/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:21:28 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/04 15:44:37 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> myarray;
	myarray.push_back(2);
	myarray.push_back(4);
	myarray.push_back(7);
	myarray.push_back(11);
	myarray.push_back(23);
	myarray.push_back(42);
	myarray.push_back(55);
	myarray.push_back(66);
	myarray.push_back(77);
	int to_find = 77;
	if (*easyfind(myarray, to_find) > 0)
	{
		std::cout << "found: " << *easyfind(myarray, 77) << std::endl;
		return 0;
	}
	else
	{
		std::cout << "value "<< to_find << " not found" << std::endl;
		return -1;
	}
}