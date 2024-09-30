#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char *ptr;
        unsigned char oc;

        ptr = (unsigned char*)s;
        oc = (unsigned char)c;
        while (n > 0)
        {
            if(*ptr == oc)
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
        char    ocr = 'p';
        char    *result = ft_memchr(str, ocr, 10);
        if (result != NULL)
        {
            printf("The first occurrence of %c is in the position: %ld\n", ocr, result - str);
        }
        printf("The character %c not a found.\n", ocr);

        return (0);
}