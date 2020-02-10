##
## EPITECH PROJECT, 2018
## task01
## File description:
## task01
##

CFLAGS		=	-g -Wall -Wextra -Werror

CFLAGS		+=	-I./include

CRI_FLAGS	=	-lcriterion --coverage

SRC_MAIN	=	src/main.c

SRC		=       bsq.c   \
                get_map.c\
                mine_sweeper.c\
                my_atoi.c

TEST_SRC 	=   get_col_count.c\
                get_file_size.c\
                get_full_map.c\
                get_line_count.c\
                headquarters.c\
                mine_sweeper.c\
                sweep_mines.c

TEST_NAME 	=	tests_run

SRC_PATH	=	$(addprefix ./src/,$(SRC))

TEST_SRC_PATH	=	$(addprefix ./tests/test_,$(TEST_SRC))

OBJ		=	$(SRC_PATH:.c=.o)	\
			$(SRC_MAIN:.c=.o)

NAME		=	bsq

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -I./include

$(TEST_NAME):
		gcc -o $(TEST_NAME) $(SRC_PATH) $(TEST_SRC_PATH) $(CRI_FLAGS) -I./include
		./tests_run

clean:
	rm -f $(OBJ) $(TEST_OBJ) *.gcno *.gcda

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur

.PHONY: $(NAME) all clean fclean re
