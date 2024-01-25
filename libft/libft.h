/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:42 by ssteveli          #+#    #+#             */
/*   Updated: 2023/10/25 14:12:38 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int ft_atoi(const char *str);
void *ft_bzero(void *a, size_t len);
void *ft_calloc(size_t count, size_t size);
int ft_check_same(const char *str, const char *to_find, int i,
				  size_t n);
int ft_isalnum(int c);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
int ft_len_num(const char *str, int i);
void *ft_memchr(const void *a, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t size);
void *ft_memmove(void *dst, const void *src, size_t size);
void *ft_memset(void *b, int c, size_t len);
int ft_print_int(const char *str, int i, char sign);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *str, const char *to_find, size_t n);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_test_str(const unsigned char *s1,
				const unsigned char *s2, int i);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_num_word(char const *s, char c);
int ft_len_to_sep(const char *s, char c, int i);
char *ft_strndup(const char *s, size_t n);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
				  void (*del)(void *));
int ft_printf(const char *a, ...);
int is_chr(char s);
int is_str(char *s);
int is_p(unsigned long s);
int is_d(int nb);
int is_u(unsigned int nb);
int is_x(unsigned int s);
int is_xup(unsigned int s);
int len_s(unsigned long s);

#endif