##
## EPITECH PROJECT, 2022
## Stumper
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/free.c \
		src/get_frequencies.c \
		src/merge_nodes.c \
		src/write_compressed_file.c \
		src/put_occurrences_in_file.c \
		src/create/create_node.c \
		src/create/create_path.c \
		src/create/create_tree.c \
		src/create/create_paths.c \
		src/utils/bubblesort.c \
		src/utils/int_to_str.c \
		src/utils/convert_big_base.c \
		src/utils/convert_to_decimal.c \

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./lib/my
LDLIBS	=	-lmy
INCLUDE	=	-I./include
CFLAGS	=	-Wall -Wextra -g3

NAME	=	antman

SEPARATOR	=	$(BLUE)━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
FILE_REMOVED	=	$(BLUE)File $(YELLOW){} $(BLUE)removed.$(WHITE)
TITLE	=	$(BOLD)$(SEPARATOR)\n\t\t
BOLD	=	\e[1m
RED		=	\e[91m
GREEN	=	\e[92m
YELLOW	=	\e[93m
BLUE	=	\e[94m
WHITE	=	\e[0m

.SILENT:$(OBJ)
.PHONY: all clean fclean re $(NAME)

all:	$(NAME)

$(OBJ):	%.o: %.c
	gcc $(INCLUDE) -g3 -c -o $@ $<
	echo -e "$(BOLD)$(BLUE)File $(RED)$@$(BLUE) created.$(WHITE)"

$(NAME):	$(OBJ)
	@$(MAKE) -C lib/my/ --no-print-directory
	@gcc $(CFLAGS) -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS) $(LDLIBS)
	@echo -e "$(BOLD)$(BLUE)Binary $(RED)$(NAME) $(BLUE)created.$(WHITE)"
	@echo -e "$(TITLE)$(GREEN)COMPILATION DONE \n$(SEPARATOR)$(WHITE)"

clean:
	@rm -f $(OBJ)
	@echo -e "$(BOLD)$(RED)Object files $(BLUE)removed.$(WHITE)"

fclean:	clean
	@$(MAKE) -C lib/my fclean --no-print-directory
	@rm -f $(NAME)
	@echo -e "$(BOLD)$(BLUE)Binary $(RED)$(NAME) $(BLUE)removed.$(WHITE)"
	@rm -f vgcore*
	@echo -e "$(BOLD)$(RED)Valgrind reports $(BLUE)removed.$(WHITE)"
	@rm -f *.gcda
	@rm -f *.gcno
	@rm -f unit_tests
	@echo -e "$(BOLD)$(RED)Unit tests $(BLUE)removed.$(WHITE)"

re:	fclean all
