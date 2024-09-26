#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>

int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
int     ft_atoi(const char *str);
size_t  ft_strlcat(char *dest, const char *src, size_t size);


#endif