SRCS  = ft_printf.c \
# where ft_printf.c and ft_printf_utils.c are

NAME = libftprintf.a

LIBFT_DIR = ./libft

LIBFT = ${LIBFT_DIR}/libft.a

OBJS = ${SRCS:.c=.o}

CC = cc

AR = ar -qs

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME} 

$(NAME): ${OBJS}
	make -C ${LIBFT_DIR} && cp libft.a && mv libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

.c.o: 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fcelan re
