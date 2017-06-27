/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jngoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 07:47:33 by jngoma            #+#    #+#             */
/*   Updated: 2017/06/25 07:55:44 by jngoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_atoi(const char *src);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				ft_memdel(void **ap);
void				ft_putstr(const char *s);
void				ft_putendl(char const *s);
void				*ft_memalloc(size_t size);
void				ft_bzero(void *s, size_t n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				*ft_memset(void *b, int c, size_t len);
void				ft_striter(char *s, void (*f)(char *));
void				*ft_memchr(const void *s1, int c, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
char				*ft_itoa(int n);
char				*ft_strnew(size_t size);
char				*ft_strdup(const char *s1);
char				*ft_strtrim(const char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcat(char *s1, const char *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);

#endif