SRCS  = ft_printf.c \
		ft_printf_utils.c \
		ft_print_hexa.c \
		ft_put_unsig_nbr.c \
		ft_putnbr.c \
		ft_put_ptr.c \

NAME = libftprintf.a

LIBFT_DIR = ./libft

LIBFT = ./libft/libft.a

OBJS = ${SRCS:.c=.o}

CC = cc

AR = ar -rcs

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME) 

$(NAME): ${OBJS}
	make -C ${LIBFT_DIR}
	cp libft/libft.a ${NAME}
	${AR} ${NAME} ${OBJS}

%.o: ${SRC}/%.C
	${CC} ${CFLAGS} -c $< -o $@

clean:
	make clean -C ${LIBFT_DIR}
	${RM} ${OBJS}

fclean: clean
		make fclean -C ./libft
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
