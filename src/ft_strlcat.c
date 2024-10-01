#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t      i;
    size_t      len;
    size_t      src_len;

    len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (size <= len)
    {
        return (size + src_len);
    }

    i = 0;
    while ((len + i) < (size - 1) && src[i])
    {
        dest[len + i] = src[i];
        i++;
    }

    dest[len + i] = '\0';
    return (len + src_len) ;
}