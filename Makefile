include ~/bash_colors.sh

NAME = libft.a

CC = gcc
CFLAG = -Wall -Wextra -Werror -g

INC = get_next_line.h libft.h

SRC =   ft_atoi.c       ft_memchr.c             ft_strchr.c     ft_strncmp.c   \
        ft_bzero.c      ft_memcmp.c             ft_strclr.c     ft_strncpy.c   \
        ft_isalnum.c    ft_memcpy.c             ft_strcmp.c     ft_strndup.c   \
        ft_isalpha.c    ft_memdel.c             ft_strcpy.c     ft_strnequ.c   \
        ft_isascii.c    ft_memmove.c            ft_strcut.c     ft_strnew.c    \
        ft_isdigit.c    ft_memset.c             ft_strdel.c     ft_strnstr.c   \
        ft_isprint.c    ft_print_word_table.c   ft_strdup.c     ft_strrchr.c   \
        ft_itoa.c       ft_putchar.c            ft_strequ.c     ft_strsplit.c  \
        ft_itoa_base.c  ft_putchar_fd.c         ft_striter.c    ft_strstr.c    \
        ft_lstadd.c     ft_putendl.c            ft_striteri.c   ft_strsub.c    \
        ft_lstdel.c     ft_putendl_fd.c         ft_strjoin.c    ft_strtrim.c   \
        ft_lstdelone.c  ft_putnbr.c             ft_strlcat.c    ft_tabc_del.c  \
        ft_lstiter.c    ft_putnbr_fd.c          ft_strlen.c     ft_tablen.c    \
        ft_lstmap.c     ft_putstr.c             ft_strmap.c     ft_tolower.c   \
        ft_lstnew.c     ft_putstr_fd.c          ft_strmapi.c    ft_toupper.c   \
        ft_memalloc.c   ft_rgba_to_int.c        ft_strncat.c    get_next_line.c\
        ft_memccpy.c    ft_strcat.c             ft_strnchar.c   ft_pow.c       \
        ft_round.c      ft_max.c                ft_min.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC) $(INC)
	@$(CC) $(CFLAG) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
        @ranlib $(NAME)
	@echo "\t${_BOLD}${_UNDER}${_GREEN}libft made${_END}"

clean:
	@rm -f $(OBJ)
	@echo "\t${_BOLD}${_RED}libft clean${_END}"

fclean: 
	@rm -f $(NAME) $(OBJ)
	@echo "\t${_UNDER}${_RED}libft fclean${_END}"

re: fclean $(NAME)
