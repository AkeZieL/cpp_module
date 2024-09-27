SRC = main.cpp RPN.cpp

OBJS = ${SRC:.cpp=.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

all: ${NAME}

%.o: %.cpp
	g++ ${FLAGS} -I./ -c $< -o $@

${NAME}: ${OBJS}
	c++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all
