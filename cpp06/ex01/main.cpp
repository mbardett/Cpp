/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:06:24 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 19:12:51 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data pokemon1;
	Data *p1p = &pokemon1;
	Data pokemon2;
	Data *p2p = &pokemon2;


	std::cout << "SERIALIZE TEST" << std::endl;
	std::cout << std::endl;

	pokemon1.hp = 100;
	pokemon1.name = "cinder";
	pokemon2.hp = 88;
	pokemon2.name = "goofy";
	
	uintptr_t a = Serializer::serialize(p1p);
	// std::cout << a.name << std::endl;
	uintptr_t b = Serializer::serialize(p2p);

	std::cout << "DESERIALIZE TEST" << std::endl;
	std::cout << std::endl;
	
	Serializer::deserialize(a);
	Serializer::deserialize(b);
	std::cout << "Deserialized struct value: " << p2p->name << p2p->hp << std::endl;
	std::cout << "Deserialized struct value: " << p1p->name << p1p->hp << std::endl;
}