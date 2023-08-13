/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:13:37 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 17:35:42 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
private:
    std::string _name; 
public:
//  Zombie(std::string name);
    ~Zombie();
    void    setName(std::string name);
    void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
Zombie  *zombieHorde(int N, std::string name);

#endif