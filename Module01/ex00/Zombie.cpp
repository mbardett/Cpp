/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:20:09 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 16:16:27 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "\033[38;5;70ma zombie spawned!\033[0m" << std::endl;
    this->_name = name;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "\033[38;5;195mzombie destroyed, may his soul finally rest!\033[0m" << std::endl;
    return ;
}


void    Zombie::announce()
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}