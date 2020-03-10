##
## EPITECH PROJECT, 2019
## navy
## File description:
## Makefile clasique
##

NAME	=	navy

SRC		=	src/main.c\
			src/error_handling.c\
			src/my_help.c\
			src/connection.c\
			src/error_map.c\
			src/signal_handling.c\
			src/command.c\
			src/error_input.c\
			src/map_enemy.c\
			src/win_lose_cond.c\
			src/my_str_to_word_array.c\
			src/nb_words.c\
			src/my_next_word.c\
			src/my_strdup.c\
			src/error_map2.c\
			src/put_in_map.c\
			src/msg_lose_win.c\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Werror -Wextra -Wall -I include -L./lib/my/ -lmy -g

all:	 $(NAME)

$(NAME):	$(OBJ)
	@make -C lib/my/
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -f src/*.o

fclean:	clean
	@rm -f $(NAME)
	@make fclean -C lib/my/

re: fclean all
