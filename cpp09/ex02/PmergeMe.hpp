/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:53:57 by mbardett          #+#    #+#             */
/*   Updated: 2023/11/05 18:56:46 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP



# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <deque>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::deque<int>		_deq;
		double				_vecTime;
		double				_deqTime;

	public:
		PmergeMe();
		PmergeMe(char **args);
		PmergeMe(const PmergeMe &src);
		PmergeMe& operator=(const PmergeMe &src);
		~PmergeMe();

		void	sortContainers();

		template <typename T>
		void	merge(T& container, int begin, int mid, int end);
		template <typename T>
		void	insertSort(T& container, int begin, int end);
		template <typename T>
		void	mergeInsert(T& container, int begin, int end);

		void	setVecTime(double time);
		void	setDeqTime(double time);
		double	getVecTime();
		double	getDeqTime();
		void	display();
};
#endif