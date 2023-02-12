##
## EPITECH PROJECT, 2022
## Antman
## File description:
## Makefile
##

all:
	@$(MAKE) -C Antman --no-print-directory
	@$(MAKE) -C Giantman --no-print-directory

clean:
	@$(MAKE) -C Antman clean --no-print-directory
	@$(MAKE) -C Giantman clean --no-print-directory

fclean:	clean
	@$(MAKE) -C Antman fclean --no-print-directory
	@$(MAKE) -C Giantman fclean --no-print-directory

re:	fclean all
