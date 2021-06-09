# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:16:02 by swquinc           #+#    #+#              #
#    Updated: 2021/04/10 03:15:08 by swquinc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Squad

SRCS = Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp main.cpp

OBJS = Squad.o TacticalMarine.o AssaultTerminator.o main.o

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
