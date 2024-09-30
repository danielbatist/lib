#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char    *last;

    last = NULL;
    while(*s)
    {
        if (*s == c)
        {
            last = s;
        }
        s++;
    }
    if (last != NULL)
    {
        return (char *)last;
    }
    return (char *)last;
}

#include <stdio.h>

int     main(void)
{
        const char str[] = "Hello World";
        int     letter = 'l';
        char    *result = ft_strrchr(str, letter);

        if (result != NULL)
        {
            printf("The last position of the character %c%c%c is:  %ld\n", '"', letter, '"', result - str);
        }
        else{
            printf("Character %c not found\n", letter);
        }

        return (0);
}