# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbilly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 12:12:21 by mbilly            #+#    #+#              #
#    Updated: 2023/11/25 14:38:20 by mbilly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serealizer

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Serializer.cpp

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
