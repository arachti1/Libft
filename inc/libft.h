/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larachti <larachti@42students.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 01:39:13 by anonymous         #+#    #+#             */
/*   Updated: 2020/04/28 01:22:20 by larachti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# include <wchar.h>
# include "get_next_line.h"

#define		HEX_CHAR		"0123456789ABCDEF";

typedef struct			s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}						t_list;

typedef struct 			s_itab
{
	int				*t;
	int				size;
}						t_itab;

void					*ft_memset(void *b, int c, size_t len);
void					ft_bzero(void *s, size_t n);
void					*ft_memcpy(void *dst, const void *src, size_t n);
void					*ft_memccpy(void *dst, const void *src, int c,
							size_t n);
void					*ft_memmove(void *dst, const void *src, size_t len);
void					*ft_memchr(const void *s, int c, size_t n);
int						ft_memcmp(const void *s, const void *s2, size_t n);
size_t					ft_strlen(const char *s);
char					*ft_strdup(const char *s1);
char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);
void					ft_strapp(char **str, char *app);
size_t					ft_strnapp(char **str, char c, size_t len);
void					ft_strprep(char **str, char *prep);
size_t					ft_strnprep(char **str, char c, size_t len);
size_t					ft_strnchar(const char *s, const char c);
size_t					ft_strlcat(char *dst, const char *src, size_t size);
char					*ft_strchr(const char *s, int c);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *haystack, const char *needle);
char					*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char					*ft_strtolower(char *s);
char					*ft_strtoupper(char *s);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_atoi(const char *str);
int						ft_isalpha(int c);
int						ft_isdigit(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_toupper(int c);
int						ft_tolower(int c);

void					*ft_memalloc(size_t size);
void					ft_memdel(void **ap);
char					*ft_strnew(size_t size);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
							char (*f)(unsigned int, char));
int						ft_strequ(char const *s, char const *s2);
int						ft_strnequ(char const *s, char const *s2, size_t n);
char					*ft_strsub(char const *s, unsigned int start,
							size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					**ft_strsplit(char const *s, char c);
char					*ft_itoa(int n);
char					*ft_itoa_base(long long int value, int base);
char					*ft_utoa_base(long long unsigned int value, int base);
void					ft_putchar(char c);
void					ft_putstr(char const *s);
void					ft_putendl(char const *s);
void					ft_putnbr(int n);
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putnbr_fd(int n, int fd);

t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst,
							void (*del)(void *, size_t));
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void					ft_print_word_table(char **table);
void					ft_tabc_del(char **tabc);
size_t					ft_tablen(char **tab);

int						ft_rgba_to_int(unsigned char r, unsigned char g,
						unsigned char b, unsigned char a);

char					*ft_strcut(char *s, size_t len);
char					*ft_strndup(const char *s, size_t len);

long long unsigned int	ft_pow(unsigned int base, int exp);
long long int			ft_round(long double a);

void					ft_putwstr(wint_t *wstr);
void					ft_putwchar(wint_t wc);

t_itab					*ft_itabnew(int size);
t_itab					*ft_itabdup(t_itab *ta);

int						ft_max(int a, int b);
int						ft_min(int a, int b);

#endif
