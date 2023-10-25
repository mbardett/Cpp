/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:19:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 18:35:48 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

//the subject explicitly says these 4 classes don't have
// to follow CanonicalOrthodoxForm
class Base
{
	public:
			virtual ~Base(){};
};

class A:public Base
{

};

class B:public Base
{

};

class C:public Base
{

};

	Base *generate();
	void identify(Base *p);
	void identify(Base &p);

#endif