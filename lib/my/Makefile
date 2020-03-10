##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	flag1.c\
			flag2.c\
			my_printf.c\
			my_put_nbr.c\
			my_putchar.c\
			my_putstr.c\
			put_unsigned.c\
			my_atoi.c\
			my_strlen.c\
			is_int.c\
			str_word_array.c\
			nb_word.c\
			my_strcmp.c\

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@rm *.o

fclean:
	@rm -f $(NAME)

re: fclean all
