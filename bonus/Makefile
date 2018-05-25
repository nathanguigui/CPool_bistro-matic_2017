##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

SRC	=	../src/core/calc_postfix.c		\
		../src/core/convert_infix_to_postfix.c	\
		../src/error_management/check_error.c	\
		../src/tools/my_getnbr_base.c \
		../src/tools/my_putnbr_base.c \
		../src/lib/lib6.c			\
		../src/lib/lib5.c			\
		../src/lib/lib4.c			\
		../src/lib/lib3.c			\
		../src/lib/lib2.c			\
		../src/lib/lib.c				\
		../src/lib/my_strtol.c			\
		../src/tools/list_management.c		\
		../src/tools/get_priority.c		\
		../src/tools/add_zero_to_expression.c	\
		../src/infin_operations/infin_add.c	\
		../src/infin_operations/infin_factors.c	\
		../src/tools/struct_management.c 	\
		main.c 					\
		res_str.c				

OBJ	=	$(SRC:.c=.o)

OGUI	=	main.c 					\
		res_str.c 				\
		strlen.c

NAME	=	bistro-matic

NGUI	=	bistro-matic_gui

LIB 	=	c_graph_prog

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(FLAGS) $(NAME) $(SRC) -l $(LIB)

gui:		
		gcc -o $(FLAGS) $(NGUI) $(OGUI) -l $(LIB)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)
		rm -rf $(NGUI)

re:		fclean all
