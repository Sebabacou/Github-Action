##
## EPITECH PROJECT, 2023
## template_project_c
## File description:
## Makefile
##

CC 			= 	gcc

NAME		=	binary

SRC_PATH	=	src/
SRC			=	$(addprefix $(SRC_PATH),\
				main.c					\
				)

BUILD_DIR	=	build

OBJ			=	$(SRC:%.c=$(BUILD_DIR)/%.o)

LIB_FLAGS	=	-L./lib/ -lmy
CFLAGS		=	-Wall -Wextra -I/include/

TMP_FILES	=	*.gcno					\
				*.gcda					\
				vgcore.*				\
				*.log					\
				-r $(BUILD_DIR)/src/	\
				$(OBJ)

# ------ DISPLAY -------- #

ECHO 		= echo -e
C_RESET 	= \033[00m
C_RED		= \e[31m
C_GREEN 	= \e[32m
C_YELLOW 	= \e[33m
C_BLUE		= \e[34m
C_PINK		= \e[35m
C_FULL_RED	= \e[41m
# ----------------------- #

all:		$(NAME)

%:
	@ $(ECHO) "$(C_RED)|==========> RULE NOT FOUND. <==========|$(C_RESET)"

%.c:
	@ $(ECHO) "$(C_RED)[KO] -> $@$(C_RESET)"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ $(ECHO) "$(C_GREEN)[OK] -> $<$(C_RESET)"

$(NAME):	$(OBJ)
	@ cp lib/include/my.h ./include/
	@ $(MAKE) -sC ./lib/
	@ $(CC) -o $@ $? $(LIB_FLAGS)
	@ $(ECHO) "$(C_PINK)|==========> $(NAME) compiled. <==========|$(C_RESET)"

clean:
	@ $(RM) $(TMP_FILES)

fclean:		clean
	@ $(RM) $(NAME)

lclean:		fclean
	@ make fclean -sC ./lib/

re:		fclean all

tests_run:
	@ $(ECHO) "$(C_BLUE)|==========> Test execute <==========|$(C_BLUE)"

debug: CFLAGS += -g
debug: CFLAGS += -Werror
debug: re

.PHONY: all re clean fclean lclean debug tests_run
