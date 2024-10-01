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