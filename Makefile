SRCS  = ft_printf.c

NAME = libftprintf.a

OBJS = ${SRCS:.c=.o}

CC = cc

AR_RC = ar rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

$(NAME): ${OBJS}
	${AR_RC} ${NAME} ${OBJS}

.c.o: 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME} 

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fcelan re
