/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbardett <mbardett@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:18:02 by mbardett          #+#    #+#             */
/*   Updated: 2023/08/12 18:05:01 by mbardett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
    public:
        void    setName(std::string str);
        void    setSurname(std::string str);
        void    setAlias(std::string str);
        void    setNumber(std::string str);
        void    setSecret(std::string str);

        std::string getName(void);
        std::string getSurname(void);
        std::string getAlias(void);
        std::string getNumber(void);
        std::string getSecret(void);
        
        void    printContactInfo(void);
    private:
        std::string _myName;
        std::string _mySurname;
        std::string _myAlias;
        std::string _myNumber;
        std::string _mySecret;
};

#endif