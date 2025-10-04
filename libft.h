#ifndef LIBFT_H
#define LIBFT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>
size_t ft_strlen(const char *s);
void * ft_memcpy(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
int	ft_isalpha(char c);
void	*ft_memchr(const void *s, int c, size_t n);
int ft_isdigit(char c);
int ft_isalnum(char c);
int ft_isascii(int c);
#ifdef __cplusplus
}
#endif

#endif
