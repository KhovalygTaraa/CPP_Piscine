# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:16:02 by swquinc           #+#    #+#              #
#    Updated: 2021/04/01 00:34:54 by swquinc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Pony

SRCS = Pony.cpp main.cpp

OBJS = Pony.o main.o

CC = clang++ -std=c++98 -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

.o: .cpp
	$(CC) -c $< -o $a
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
