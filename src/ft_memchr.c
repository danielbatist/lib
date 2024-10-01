#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char *ptr;

        ptr = (unsigned char*)s;
        while (n > 0)
        {
            if(*ptr == (unsigned char)c)
            {
                return (void *)ptr;
            }
            ptr++;
            n--;
        }
        return NULL;
}
#include <stdio.h>

int     main(void)
{
        char    str[] = "Hello World";
        char    ocr = 'o';
        char    *result = ft_memchr(str, ocr, 10);
        if (result != NULL)
        {
            printf("The first occurrence of %c is in the position: %ld\n", ocr, result - str);
        }
        printf("The character %c not a found.\n", ocr);

        return (0);
}