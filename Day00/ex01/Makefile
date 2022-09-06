NAME = Phonebook

SRCS = 	main.cpp \
		Phonebook.cpp \
		Contact.cpp

OBJS = ${SRCS:%.cpp=%.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all:	${NAME}

%.o : %.cpp Makefile
	c++ ${FLAGS} -c $< -o $@

${NAME}:	${OBJS}
	c++ ${FLAGS} ${OBJS} -I. -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re:	fclean all
