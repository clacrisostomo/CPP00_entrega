/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:18:22 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 20:44:38 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

Contact::Contact(){
    _firstName = "";
    _lastName = "";
    _nickname = "";
    _phoneNumber = "";
    _darkestSecret = "";
}

Contact::~Contact(){
}

std::string Contact::getFirstName(void){
    return(_firstName);
}

void    Contact::setFirstName(std::string firstName){
    _firstName = firstName;
}

std::string Contact::getLastName(void){
    return(_lastName);
}

void    Contact::setLastName(std::string lastName){
    _lastName = lastName;
}

std::string Contact::getNickname(void){
    return(_nickname);
}

void    Contact::setNickname(std::string nickname){
    _nickname = nickname;
}

std::string Contact::getPhoneNumber(void){
    return(_phoneNumber);
}

void    Contact::setPhoneNumber(std::string phoneNumber){
    _phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret(void){
    return(_darkestSecret);
}

void    Contact::setDarkestSecret(std::string darkestSecret){
    _darkestSecret = darkestSecret;
}