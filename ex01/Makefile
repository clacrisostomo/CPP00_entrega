# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csantos- <csantos-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 20:00:01 by csantos-          #+#    #+#              #
#    Updated: 2022/11/03 21:38:54 by csantos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = 	main.cpp \
		PhoneBook.cpp \
		Contact.cpp \
		ContactDetails.cpp
		
INC = 	PhoneBook.hpp \
		Contact.hpp

OBJ = 	$(SRC:.cpp=.o)

all: $(NAME) $(INC)
$(NAME): $(OBJ) $(INC)
	$(CC) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(FLAGS) -c $< -o $@

git:
	@git add .
	@git commit -m "$m"
	@git push

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: clean all