/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:17:56 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 15:27:08 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout << "first test" << std::endl; 
    Zombie  zalpha("alpha");
    zalpha.announce();
    std::cout << "second test" << std::endl;
    Zombie  *zbeta = new Zombie("beta");
    zbeta->announce();
    std::cout << "third test" << std::endl;
    randomChump("gamma");
    delete(zbeta);
    return (0);
}