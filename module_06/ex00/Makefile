# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbilly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 12:12:21 by mbilly            #+#    #+#              #
#    Updated: 2023/11/20 14:12:55 by mbilly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scalarConverter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ScalarConverter.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	g++ $(CFLAGS) -I./ -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -g -o $(NAME)

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
