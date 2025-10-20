/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:36:53 by tidebonl          #+#    #+#             */
/*   Updated: 2025/10/20 10:34:52 by tidebonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <unistd.h>

unsigned int	ft_strlen(const char *str);
int				ft_atoi(const	char *str);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int src);
int				ft_toupper(int src);
int				ft_strncmp(const char *str,	const char *str2, size_t lenght);
int				ft_memcmp(const void *pt1, const void *pt2, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
void			*ft_memchr(const void *memblock, int search, size_t size);
void			*ft_memcpy(void *dest, const void *src, size_t size);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t elementCount, size_t elementSize);
void			*ft_memmove(void *dest, const void *src, size_t n);
char			*ft_strchr(const char *str, int to_find);
char			*ft_strdup(const	char *source);
char			*ft_strnstr(const	char *str, const char *to_find, size_t len);
char			*ft_strrchr(const char *str, int to_find);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
#endif
