# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbilly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 12:12:21 by mbilly            #+#    #+#              #
#    Updated: 2023/11/10 18:02:26 by mbilly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	g++ $(CFLAGS) -I./ -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
