NAME		=	Template

SRC			=	main.cpp

HEADER		=	whatever.hpp

OBJS		=	${SRC:%.cpp=%.o}

FLAGS		=	-Wall -Wextra -Werror -I. -std=c++98

CC			=	c++

RM			=	rm -f

.PHONY:		all clean fclean re

all: 		${NAME}

${NAME}:	${OBJS}
			${CC} ${FLAGS} ${OBJS} -o $@
				
%.o:		%.cpp ${HEADER} Makefile
			${CC} ${FLAGS} -c $< -o $@
				
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all