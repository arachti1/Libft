include ~/bash_colors.sh

NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror

SRCS =   	ft_atoi.c					\
			ft_bzero.c					\
			ft_isalnum.c				\
			ft_isalpha.c				\
			ft_isascii.c				\
			ft_isdigit.c				\
			ft_isprint.c				\
			ft_itoa.c					\
			ft_itoa_base.c				\
			ft_lstadd.c					\
			ft_lstdel.c					\
			ft_lstdelone.c				\
			ft_lstiter.c				\
			ft_lstmap.c					\
			ft_lstnew.c					\
			ft_memalloc.c				\
			ft_memccpy.c				\
			ft_memchr.c					\
			ft_memcmp.c					\
			ft_memcpy.c					\
			ft_memdel.c					\
			ft_memmove.c				\
			ft_memset.c					\
			ft_pow.c					\
			ft_print_word_table.c		\
			ft_putchar.c				\
			ft_putchar_fd.c				\
			ft_putendl.c				\
			ft_putendl_fd.c				\
			ft_putnbr.c					\
			ft_putnbr_fd.c				\
			ft_putstr.c					\
			ft_putstr_fd.c				\
			ft_putwchar.c				\
			ft_putwstr.c				\
			ft_rgba_to_int.c			\
			ft_round.c					\
			ft_strapp.c					\
			ft_strcat.c					\
			ft_strchr.c					\
			ft_strclr.c					\
			ft_strcmp.c					\
			ft_strcpy.c					\
			ft_strcut.c					\
			ft_strdel.c					\
			ft_strdup.c					\
			ft_strequ.c					\
			ft_striter.c				\
			ft_striteri.c				\
			ft_strjoin.c				\
			ft_strlcat.c				\
			ft_strlen.c					\
			ft_strmap.c					\
			ft_strmapi.c				\
			ft_strnapp.c				\
			ft_strncat.c				\
			ft_strnchar.c				\
			ft_strncmp.c				\
			ft_strncpy.c				\
			ft_strndup.c				\
			ft_strnequ.c				\
			ft_strnew.c					\
			ft_strnprep.c				\
			ft_strnstr.c				\
			ft_strprep.c				\
			ft_strrchr.c				\
			ft_strsplit.c				\
			ft_strstr.c					\
			ft_strsub.c					\
			ft_strtolower.c				\
			ft_strtoupper.c				\
			ft_strtrim.c				\
			ft_tabc_del.c				\
			ft_tablen.c					\
			ft_tolower.c				\
			ft_toupper.c				\
			get_next_line.c				

INCS = get_next_line.h libft.h

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/

SRC = $(addprefix $(SRC_DIR), $(SRCS))
OBJ = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
INC = $(addprefix $(INC_DIR), $(INCS))


all: $(NAME)

$(NAME): $(OBJ) $(INC) Makefile
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\t${_BOLD}${_UNDER}${_GREEN}$(NAME) made${_END}"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC) | obj
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

obj:
	@mkdir obj

clean:
	@rm -f $(OBJ)
	@echo "\t${_BOLD}${_RED}$(NAME) clean${_END}"

fclean: 
	@rm -rf $(NAME) $(OBJ_DIR)
	@echo "\t${_UNDER}${_RED}$(NAME) full clean${_END}"

re: fclean $(NAME)

.PHONY: clean fclean re
