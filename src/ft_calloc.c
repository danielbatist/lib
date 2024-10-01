#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
        size_t          tot;
        unsigned char *pt;

        if (nmemb == 0 || size == 0)
                return malloc(1);
        tot = nmemb * size;
        if ((tot / size) != nmemb)
                return NULL;
        pt = (unsigned char *)malloc(tot);
        if(pt == NULL)
                return NULL;
        else
                ft_bzero(pt, tot);
        return (void *)pt;
}