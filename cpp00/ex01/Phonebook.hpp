/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:51:22 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/07 19:01:15 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
	public:
		int 		contacts;
		Contact 	phonebook[MAX_CONTACTS];
		int			addContact(void);
		int			findContact();
		void		showAll(void);
		std::string	capString(std::string str);
};

#endif