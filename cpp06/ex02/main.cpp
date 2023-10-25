/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:43:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/25 18:46:23 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base *first=generate();
	Base *second= new C();
	
	identify(first);
	identify(second);
	identify(*first);
	identify(*second);

	delete (second);
	delete first;
	return 0;
}