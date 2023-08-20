/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:23:36 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/04 22:29:21 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//
int main(int argc, char **argv)
{
    //HI! I'm feeling rebel today and I'm leaving a comment inside a function too
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string str(argv[i]);
        for (size_t k = 0; k < str.size(); k++)
        {
            std::cout << (char)toupper(argv[i][k]);
        }
    }
    std::cout << std::endl;
    return (0);
}