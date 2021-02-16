/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes <alopes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:08:59 by alopes-           #+#    #+#             */
/*   Updated: 2021/02/16 17:28:53 by alopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_calloc(size_t n, size_t size);
int				ft_isalpha(int arg);
int             ft_isalnum(int arg);
int				ft_isascii(int arg);
int				ft_isdigit(int arg);
int				ft_isascii(int arg);
int             ft_isspace(int c);
int             ft_isprint(int arg);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
size_t      	ft_strlcat(char *dest, const char *src, size_t size);
size_t          ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *src);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strrchr(const char *str, int c);
int				ft_toupper(int arg);
int				ft_tolower(int arg);

#endif
