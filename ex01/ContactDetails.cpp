/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactDetails.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:01:18 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 21:57:25 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

void    PhoneBook::addFirstName(){
    std::string str;

    std::cout << "Insert first name: ";
    std::getline(std::cin, str);
    exitProgram(str);    
    while (str.length() < 1)
    {
        std::cout << "Please insert first name: ";
        std::getline(std::cin, str);
        exitProgram(str);
    }
    _contacts[_index % 8].setFirstName(str);
}

void    PhoneBook::addLastName(){
    std::string str;

    std::cout << "Insert last name: ";
    std::getline(std::cin, str);
    exitProgram(str);    
    while (str.length() < 1)
    {
        std::cout << "Please insert last name: ";
        std::getline(std::cin, str);
        exitProgram(str);
    }
     _contacts[_index % 8].setLastName(str);
}

void    PhoneBook::addNickname(){
    std::string str;

    std::cout << "Insert nickname: ";
    std::getline(std::cin, str);
    exitProgram(str);    
    while (str.length() < 1)
    {
        std::cout << "Please insert nickname: ";
        std::getline(std::cin, str);
        exitProgram(str);
    }
    _contacts[_index % 8].setNickname(str);
}

void    PhoneBook::addPhoneNumber(){
    std::string str;

    std::cout << "Insert phone number: ";
    std::getline(std::cin, str);
    exitProgram(str);    
    while (str.length() < 1)
    {
        std::cout << "Please insert phone number: ";
        std::getline(std::cin, str);
        exitProgram(str);
    }
    _contacts[_index % 8].setPhoneNumber(str);
}

void    PhoneBook::addDarkestSecret(){
    std::string str;

    std::cout << "Insert darkest secret: ";
    std::getline(std::cin, str);
    exitProgram(str);    
    while (str.length() < 1)
    {
        std::cout << "Please insert darkest secret: ";
        std::getline(std::cin, str);
        exitProgram(str);
    }
    _contacts[_index % 8].setDarkestSecret(str);
    exitProgram(str);
    _index++;
}
