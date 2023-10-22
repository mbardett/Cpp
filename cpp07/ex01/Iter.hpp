/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:13:38 by mbardett          #+#    #+#             */
/*   Updated: 2023/10/22 15:11:44 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

//the subject explicitly says "Templates must be defined in the header files"
template <typename T>
void	myPrint(T &element ) { std::cout << "==>" << element << std::endl;};

template <typename Arr, typename Len, typename Func>
void	iter( Arr *array, Len len, Func &myPrint ) { for (int i = 0; i < len; i++)myPrint(array[i]);};

#endif