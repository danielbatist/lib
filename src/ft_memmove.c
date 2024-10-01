#include "libft.h"


void    *ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char *s;
        unsigned char *d;

        s = (unsigned char*)src;
        d = (unsigned char*)dest;

        if (d > s)
        {
            while (n > 0)
            {
                d[n - 1] = s[n - 1];
                n--;
            }
        }
        else
        {
            while(n > 0)
            {
                *d = *s;
                d++;
                s++;
                n--;
            }
        }
        return (dest);
}