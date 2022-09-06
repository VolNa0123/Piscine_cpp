NAME = megaphone

SRCS = megaphone.cpp

OBJS = ${SRCS:%.cpp=%.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:	${NAME}

%.o : %.cpp
	g++ ${FLAGS} -c $< -o $@

${NAME}:	${OBJS}
	g++ ${FLAGS} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all
