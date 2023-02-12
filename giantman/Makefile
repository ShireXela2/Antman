##
## EPITECH PROJECT, 2022
## Stumper
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/node.c \
		src/giantman.c \
		src/get_nodes.c \
		src/bubblesort.c \
		src/create_tree.c \
		src/merge_nodes.c \
		src/create_paths.c \
		src/hardcode_btree.c \
		src/get_chars_in_tree.c \
		src/convert_to_decimal.c

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L./lib/my
LDLIBS	=	-lmy
INCLUDE	=	-I./include
CFLAGS	=	-Wall -Wextra -g3

NAME	=	giantman

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
	gcc -Wl,--rpath=/lib/x86_64-linux-gnu/libc.so.6 $(INCLUDE) -g3 -c -o $@ $<
	echo -e "$(BOLD)$(BLUE)File $(RED)$@$(BLUE) created.$(WHITE)"

$(NAME):	$(OBJ)
	@$(MAKE) -C ./lib/my/ --no-print-directory
	@gcc $(CFLAGS) -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS) $(LDLIBS)
	@echo -e "$(BOLD)$(BLUE)Binary $(RED)$(NAME) $(BLUE)created.$(WHITE)"
	@echo -e "$(TITLE)$(GREEN)COMPILATION DONE \n$(SEPARATOR)$(WHITE)"

clean:
	@rm -f $(OBJ)
	@rm -f .*.swp
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
