##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

CFLAGS	+=	-Iinclude/

LIB	=	./lib/my/my_atoi.c					\
		./lib/my/my_char_isnum.c				\
		./lib/my/my_getnbr.c					\
		./lib/my/my_put_nbr.c					\
		./lib/my/my_putchar.c					\
		./lib/my/my_putstr.c					\
		./lib/my/my_revstr.c					\
		./lib/my/my_strcat.c					\
		./lib/my/my_strcmp.c					\
		./lib/my/my_strcpy.c					\
		./lib/my/my_strdup.c					\
		./lib/my/my_strisnum.c					\
		./lib/my/my_strlen.c					\
		./lib/my/my_strtol.c

SRC	=	./src/core/rpn/calc_postfix.c				\
		./src/core/rpn/convert_infix_to_postfix.c		\
		./src/core/infin_operations/infin_sum.c			\
		./src/core/infin_operations/infin_operations.c		\
		./src/core/infin_operations/infin_factors.c		\
		./src/error_management/valid_char.c			\
		./src/error_management/check_error.c			\
		./src/tools/base_management/my_getnbr_base.c		\
		./src/tools/base_management/my_putnbr_base.c		\
		./src/tools/calc/add.c					\
		./src/tools/calc/add_det.c				\
		./src/tools/calc/mult.c					\
		./src/tools/calc/sub.c					\
		./src/tools/calc/checknb.c				\
		./src/tools/epur/epur.c					\
		./src/tools/epur/epur_base.c				\
		./src/tools/epur/epur_parenthese.c			\
		./src/tools/epur/epur_space.c				\
		./src/tools/epur/epur_zero.c				\
		./src/tools/help/display_help.c\
		./src/tools/parsing/my_max.c				\
		./src/tools/parsing/get_pos.c				\
		./src/tools/parsing/get_priority.c			\
		./src/tools/parsing/add_zero_to_expression.c		\
		./src/tools/struct_management/struct_management.c	\
		./src/tools/struct_management/list_management.c		\
		./src/main.c

OBJ	=	$(SRC:.c=.o) $(LIB:.c=.o)

NAME	=	calc

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(FLAGS) $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
