/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:55:40 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/13 20:37:51 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <string>
#include <iostream>
//for integer types, don't know why but cstdint was giving errors
#include <stdint.h>

struct Data
{
	std::string name;
	int hp;
};

//since the subject  demands to be static, the constructor and other
//elements to respect Canonical  Orthodox Form are useless, this 
//class, having only static member functions, will never be instantiated
// and will always be accessible
class Serializer
{
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t rawVal);
		Serializer();
		~Serializer();
		Serializer(const Serializer &source);
		Serializer &operator=(const Serializer &source);
	private:
};

#endif