##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## Makefile
##

NAME	= libmy.a

CC	= gcc

RM	= rm -f

SRCS	=	./src/my_printf.c	\
		./src/my_putchar.c	\
		./src/my_putstr.c	\
		./src/my_put_nbr.c	\
		./src/my_putnbr_base.c	\
		./src/my_put_nbr_unsigned.c	\
		./src/my_strlen.c	\
		./src/my_speciale_putnbr.c	\
		./src/my_showstr.c		\
		./src/my_getnbr.c		\
		./src/my_nb_len.c		\
		./src/convert_base.c		\
		./src/my_getnb.c		\
		./src/next_flag.c		\
		./src/my_sign.c			\
		./src/my_size_space_check.c	\
		./src/my_modu_l.c		\
		./src/to_send_inp.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra

all: $(NAME)
	rm src/*.o

$(NAME): $(OBJS) 
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
