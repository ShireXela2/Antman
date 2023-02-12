##
## EPITECH PROJECT, 2022
## my_printf
## File description:
## Makefile
##

SRC	=	my_putchar.c \
		math/min_max.c \
		math/my_isneg.c \
		math/my_is_prime.c \
		math/round_number.c \
		math/my_find_prime_sup.c \
		math/my_compute_power_rec.c \
		math/my_compute_square_root.c \
		files/print_file.c \
		files/get_file_content.c \
		arrays/my_arraylen.c \
		arrays/my_free_array.c \
		arrays/my_str_to_array.c \
		arrays/my_malloc_array.c \
		arrays/my_show_word_array.c \
		arrays/my_str_to_word_array.c \
		numbers/my_swap.c \
		numbers/my_nblen.c \
		numbers/my_getnbr.c \
		numbers/my_put_nbr.c \
		numbers/my_sort_int_array.c \
		strings/my_putstr.c \
		strings/my_strstr.c \
		strings/my_strlen.c \
		strings/my_strdup.c \
		strings/my_strcpy.c \
		strings/my_strcmp.c \
		strings/my_strcat.c \
		strings/my_revstr.c \
		strings/my_strncat.c \
		strings/my_strncmp.c \
		strings/my_strncpy.c \
		strings/my_puterror.c \
		strings/my_strupcase.c \
		strings/my_str_isnum.c \
		strings/my_strlowcase.c \
		strings/my_str_isupper.c \
		strings/my_str_islower.c \
		strings/my_str_isalpha.c \
		strings/my_strcapitalize.c \
		strings/my_str_isprintable.c \
		my_printf/my_printf.c \
		my_printf/get_flags.c \
		my_printf/print_types.c \
		my_printf/convert_base.c \
		my_printf/e_flag.c \
		linked_list/list_allocation.c \
		linked_list/list_destruction.c \
		linked_list/list_manipulation.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a
INC_DIR	=	../../include/
HEADER	=	my.h

SEPARATOR	=	$(BLUE)━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
FILE_REMOVED	=	$(BLUE)File $(YELLOW){} $(BLUE)removed.$(WHITE)
LIB_PREFIX	=	$(BOLD)$(LBLUE)LIB
TITLE	=	$(BOLD)$(SEPARATOR)\n\t\t
BOLD	=	\e[1m
RED		=	\e[91m
GREEN	=	\e[92m
YELLOW	=	\e[93m
BLUE	=	\e[94m
LBLUE	=	\e[96m
WHITE	=	\e[0m

.SILENT:	$(OBJ)
.PHONY:	all clean fclean re $(NAME)

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo -e "$(LIB_PREFIX) $(BLUE)Binary $(RED)$(NAME) $(BLUE)created.$(WHITE)"
	@cp $(NAME) ../
	@cp $(HEADER) $(INC_DIR)

clean:
	@rm -f $(OBJ)
	@echo -e "$(LIB_PREFIX) $(RED)Object files $(BLUE)removed.$(WHITE)"

fclean:	clean
	@rm -f $(NAME)
	@rm -f ../$(NAME)
	@echo -e "$(LIB_PREFIX) $(BLUE)Binary $(RED)$(NAME) $(BLUE)removed.$(WHITE)"

re:	fclean all
