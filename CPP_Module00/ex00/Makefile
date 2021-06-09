# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:16:02 by swquinc           #+#    #+#              #
#    Updated: 2021/03/27 18:53:34 by swquinc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = megaphone.o

CC = clang++ -std=c++98 -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $?

$(NAME): $(OBJS)
	$(CC) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
