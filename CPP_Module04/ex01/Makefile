# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:16:02 by swquinc           #+#    #+#              #
#    Updated: 2021/04/09 16:44:48 by swquinc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Character

SRCS = AWeapon.cpp Character.cpp Enemy.cpp PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp main.cpp

OBJS = AWeapon.o Character.o Enemy.o PlasmaRifle.o PowerFist.o RadScorpion.o SuperMutant.o main.o

CC = clang++ -std=c++98 -pedantic -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.cpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
