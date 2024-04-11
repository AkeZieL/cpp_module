# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abeaugra <abeaugra@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 13:48:13 by abeaugra          #+#    #+#              #
#    Updated: 2023/11/17 16:50:03 by mbilly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl2
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
SRCS	= $(wildcard *.cpp)
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	g++ $(CFLAGS) -I./ -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[0;32mCompilation reussie"

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;31mDeleting OBJS Done"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31mDeleting NAME Done"

re : fclean all

.PHONY: 	all clean fclean re .cpp.o
