/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:08:36 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/13 18:41:42 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPnt = &str;
	std::string	&strRef = str;

	std::cout << &str << std::endl;
	std::cout << strPnt << std::endl;
	std::cout << &strRef << std::endl;
	
	std::cout << str << std::endl;
	std::cout << *strPnt << std::endl;
	std::cout << "\033[38;5;211m" << strRef << "\033[0m" << std::endl;
	return (0);
}