#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
int     ft_atoi(const char *str);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int     strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);

#endif