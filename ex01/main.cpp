/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:31:31 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 21:37:30 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int main(){
    
    std::string command;
    PhoneBook   phoneBook;

    std::cout << "Welcome to the PhoneBook! :D" << std::endl;

    while (!std::cin.eof())
    {
        std::cout << "Insert one of the following commands: ADD, SEARCH or EXIT. You can EXIT at any time." << std::endl;
        std::getline(std::cin, command);
        
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else    std::cout << "Please enter a valid command: ADD, SEARCH or EXIT." << std::endl;
    }
    return (0);
}