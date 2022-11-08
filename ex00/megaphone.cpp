/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:33:48 by csantos-          #+#    #+#             */
/*   Updated: 2022/11/03 19:45:11 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void megaphone(std::string msg){
    for (int i = 0; msg[i]; i++)
        msg[i] = toupper(msg[i]);
    std::cout << msg;
}

int main(int argc, char **argv){
    if (argc ==1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; argv[i]; i++)
        megaphone(argv[i]);
    std::cout << std::endl;
    return (0);
}