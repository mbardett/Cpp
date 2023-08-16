/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:02:15 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/16 22:11:18 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

//there are two versions of the getline function, one with 3 args, 
//the 3rd arg being a custom char "delimiter"; the version with only 2 args sets the delimiter to \n
int	main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string buffer;
	size_t	i = 0;
	
	if (argc != 4)
	{
		std::cout << "\033[38;5;160minvalid arguments\033[0m" << std::endl;
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream finput(filename);
	if (!finput.is_open() || !getline(finput,buffer))
	{
		std::cout << "\033[38;5;160merror, file doesn't exist or is corrupted\033[0m" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::ofstream copy(filename + ".replace");
	if (!copy.is_open())
	{
		std::cout << "\033[38;5;160merror, could not create new file\033[0m" << std::endl;
		exit(EXIT_FAILURE);
	}
	while (std::getline(finput, buffer))
	{
		while ((i = buffer.find(s1)) != std::string::npos)
		{
			buffer.erase(i, s1.size());
			buffer.insert(i, s2);
			i += s1.size();
		}
		copy << buffer << std::endl;
	}
	finput.close();
	copy.close();
	return (0);
}
