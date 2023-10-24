/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 19:04:03 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/24 21:49:46 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer()
{
	std::cout <<"Serializer constructor called" << std::endl;
}
Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer &source)
{
	std::cout <<"Serializer copy constructor called" << std::endl;
	*this = source;
}

Serializer &Serializer::operator=(const Serializer &source)
{
	std::cout <<"Serializer assignment operator called" << std::endl;
	if (this == &source)
		return *this;
	return *this;
}
//
uintptr_t Serializer::serialize( Data* ptr )
{
	std::cout << "\033[38;5;202mSerialized Pointer to " << ptr->name <<"!\033[0m" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize( uintptr_t rawVal )
{
	std::cout << "\033[38;5;120mDeserialized pointer to "<< reinterpret_cast<Data *>(rawVal)->name << "\033[0m" <<std::endl;
	// std::cout <<"Pointer deserialied!" << std::endl;
	return (reinterpret_cast<Data *>(rawVal));
}