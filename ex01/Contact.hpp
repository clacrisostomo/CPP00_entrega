/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:14:56 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 20:42:06 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Contact{

    private:
        std::string     _firstName;
        std::string     _lastName;
        std::string     _nickname;
        std::string     _phoneNumber;
        std::string     _darkestSecret;

    public:

        Contact();
        ~Contact();

        std::string getFirstName(void);
        void setFirstName(std::string firstName);

        std::string getLastName(void);
        void setLastName(std::string lastName);

        std::string getNickname(void);
        void setNickname(std::string nickname);

        std::string getPhoneNumber(void);
        void setPhoneNumber(std::string phoneNumber);

        std::string getDarkestSecret(void);
        void setDarkestSecret(std::string darkestSecret);
};

#endif