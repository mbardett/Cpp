/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:06:24 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/13 19:16:31 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data pokemon1;
	Data *p1p = &pokemon1;
	Data pokemon2;
	Data *p2p = &pokemon2;
	uintptr_t a = Serializer::serialize(p1p);
	uintptr_t b = Serializer::serialize(p2p);

	pokemon1.hp = 100;
	pokemon1.name = "cinder";
	pokemon2.hp = 88;
	pokemon2.name = "goofy";
	
	// Serializer::deserialize(a)->name
	std::cout << Serializer::deserialize(a)->name<< std::endl;
	// Serializer::deserialize(b)->name;
	std::cout << Serializer::deserialize(b)->name<< std::endl;
}