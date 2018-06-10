##
## EPITECH PROJECT, 2017
## makefile unitaire
## File description:
## makefile unitaire
##

SRC_DIR		=	$(realpath ../src)

SRC		=	$(SRC_DIR)/my_printf.c			\
			$(SRC_DIR)/my_putchar.c			\
			$(SRC_DIR)/my_put_nbr.c			\
			$(SRC_DIR)/my_put_nbr_unsigned.c	\
			$(SRC_DIR)/my_putstr.c			\
			$(SRC_DIR)/my_getnbr.c			\
			$(SRC_DIR)/my_putnbr_base.c		\
			$(SRC_DIR)/my_showstr.c			\
			$(SRC_DIR)/my_strlen.c			\
			$(SRC_DIR)/my_nb_len.c			\
			$(SRC_DIR)/my_speciale_putnbr.c		\
			$(SRC_DIR)/convert_base.c		\
			$(SRC_DIR)/my_getnb.c			\
			$(SRC_DIR)/my_sign.c			\
			$(SRC_DIR)/my_size_space_check.c	\
			$(SRC_DIR)/next_flag.c			\
			$(SRC_DIR)/my_modu_l.c			\
			$(SRC_DIR)/to_send_inp.c

SRC_UT_DIR	=	$(realpath .)

SRC_UT		=	$(SRC_UT_DIR)/tests_put_nbr_bin.c		\
			$(SRC_UT_DIR)/tests_put_nbr.c			\
			$(SRC_UT_DIR)/tests_put_nbr_hexa.c		\
			$(SRC_UT_DIR)/tests_put_nbr_hexam.c		\
			$(SRC_UT_DIR)/tests_put_nbr_octal.c		\
			$(SRC_UT_DIR)/tests_return_put_nbr.c		\
			$(SRC_UT_DIR)/tests_return_put.c		\
			$(SRC_UT_DIR)/tests_putchar.c			\
			$(SRC_UT_DIR)/tests_putstr.c			\
			$(SRC_UT_DIR)/tests_return_le.c

OBJ		=	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS		=	-Wall -Wextra --coverage

CFLAGS		+=	-I ../include/

LDFLAGS		=	-lcriterion -lgcov

NAME		=	units

all:		$(NAME)
		rm -f $(OBJ)
		rm -f $(SRC_DIR)/*.g*
		rm -f $(SRC_UT_DIR)/*g*

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f $(SRC_DIR)/*.g*
		rm -f $(SRC_UT_DIR)/*g*

fclean:		clean
		rm -f $(NAME)

re:		fclean all
