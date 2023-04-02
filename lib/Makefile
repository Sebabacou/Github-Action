##
## EPITECH PROJECT, 2022
## Makefiles
## File description:
## make files
##

CC = gcc

LIB_NAME	=	libmy.a

LIB_PATH	=	src_lib/
PATH_ARRAY	=	array/
PATH_MATH	=	math/
PATH_DISPLAY=	display/
PATH_STRING	=	string/

LIB_SRC		=	$(addprefix $(LIB_PATH), 	\
				$(addprefix $(PATH_ARRAY),	\
				my_sort_int_array.c			\
				my_str_to_word_array.c		\
				)\
				$(addprefix $(PATH_MATH),	\
				my_compute_power_rec.c		\
				my_compute_square_root.c	\
				my_getnbr.c					\
				my_isneg.c					\
				my_is_prime.c				\
				my_find_prime_sup.c			\
				)\
				$(addprefix $(PATH_DISPLAY),\
				my_putchar.c				\
				my_put_nbr.c				\
				my_putstr.c					\
				)\
				$(addprefix $(PATH_STRING),	\
				my_revstr.c					\
				my_strcapitalize.c			\
				my_strcat.c					\
				my_strcmp.c					\
				my_strcpy.c					\
				my_str_isalpha.c			\
				my_str_islower.c			\
				my_str_isnum.c				\
				my_str_isprintable.c		\
				my_str_isupper.c			\
				my_strlen.c					\
				my_strlowcase.c				\
				my_strncat.c				\
				my_strncmp.c				\
				my_strstr.c					\
				my_strupcase.c				\
				)\
				)

BUILD_DIR	=	./../build

LIB_OBJ		=	$(LIB_SRC:%.c=$(BUILD_DIR)/%.o)

TMP_FILES	=	*.gcno					\
				*.gcda					\
				vgcore.*				\
				*.log					\
				-r $(BUILD_DIR)			\
				$(LIB_OBJ)

# ------ DISPLAY -------- #
ECHO 		= echo -e
C_RESET 	= \033[00m
C_RED		= \e[31m
C_GREEN 	= \e[32m
C_YELLOW 	= \e[33m
C_PINK		= \e[35m
C_FULL_RED	= \e[41m
# ----------------------- #

all:		$(LIB_NAME)

.PHONY: all

%.c:
	@ $(ECHO) "$(C_RED)[KO] -> $@$(C_RESET)"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(@D)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ $(ECHO) "$(C_GREEN)[OK]$(C_RESET) -> $<"

$(LIB_NAME):	$(LIB_OBJ)
	@ $(AR) rc $@ $?

clean:
	@ $(RM) $(TMP_FILES)

fclean:	clean
	@ $(RM) $(LIB_NAME)

re: fclean all

.PHONY:	clean fclean re
