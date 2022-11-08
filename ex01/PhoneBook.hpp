/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:15:11 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 21:56:52 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "./Contact.hpp"

class PhoneBook{
    
    private:
        
        int         _index;
        Contact     _contacts[8];

    public:
    
        PhoneBook();
        ~PhoneBook();

        void addContact();
        void addFirstName();
        void addLastName();
        void addNickname();
        void addPhoneNumber();
        void addDarkestSecret();
        void searchContact();
        void printContacts(int i);
        std::string printWord(std::string word);
        void exitProgram(std::string cmd);
        
};

#endif