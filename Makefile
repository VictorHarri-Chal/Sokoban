##
## EPITECH PROJECT, 2020
## B-PSU-200-NAN-2-1-bsmysokoban-victor.harri-chal
## File description:
## Makefile
##

SRC		=	src/main.c				\
				src/my_sokoban.c 		\
				src/init_struct.c 			\
				src/resize.c 		\
				src/get_player_pos.c 	\
				src/pop_map.c 		\
				src/check_map.c 	\
				src/check_x_and_o.c \
				src/check_win.c 	\
				src/check_lose.c 	\
				src/win_choice.c 	\
				src/lose_choice.c 	\
				src/mouvements.c 	\
				src/move_left.c 	\
				src/move_right.c 	\
				src/move_upper.c 	\
				src/move_down.c 	\
				src/usage.c 		\
				src/utils.c 		\
				src/utils2.c

NAME	=	my_sokoban

CFLAGS	+=	-Wall -Wextra -Werror -I include/ -lncurses

OBJ	=		$(SRC:.c=.o)

all:		$(NAME)

$(NAME):		$(OBJ)
				gcc -o $(NAME) $(OBJ) $(CFLAGS)
				rm -f $(OBJ)
clean:
				rm -f $(OBJ)

fclean:	clean
				rm -f $(NAME)
				rm -f *.gcda
				rm -f *.gcno

re:				fclean all

.PHONY:	all	clean	fclean re
