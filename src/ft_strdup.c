#include "libft.h"

char    *ft_strdup(const char *s)
{
        size_t      len = ft_strlen(s);
        char        *cpy = (char *)malloc((len + 1) * (sizeof(char)));
        if (cpy == NULL)
        {
            return NULL;
        }
        else
        {
            ft_strlcpy(cpy, s, len + 1);
        }
        return (cpy);
}