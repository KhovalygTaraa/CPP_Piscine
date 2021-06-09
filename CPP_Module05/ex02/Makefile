# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: swquinc <swquinc@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 15:16:02 by swquinc           #+#    #+#              #
#    Updated: 2021/04/12 23:05:46 by swquinc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Forms

SRCS = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = Bureaucrat.o main.o Form.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o

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
