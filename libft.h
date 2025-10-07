/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:19:05 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/06 21:56:07 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

int ft_atoi(const char *str);
void ft_bzero(void *str, size_t len);
int ft_isalnum(int c);
int	ft_isalpha(char c);
int ft_isascii(int c);
int ft_isdigit(char c);
int ft_isprint(char c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void * ft_memcpy(void * dst, const void * src, size_t len);
void * ft_memmove(void *dst, const void *src, size_t len);
void * ft_memset(void *str, int c, size_t len);
char	*ft_strchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char * ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

#endif
