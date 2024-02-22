// File: libft.h

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int	ft_toupper(int c);
int     ft_tolower(int i);
int     ft_isalnum(int i);
int	ft_isalpha(int i);
int	ft_isascii(int i);
int	ft_isdigit(int i);
int	ft_isprint(int i);
int	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int 	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

#endif

