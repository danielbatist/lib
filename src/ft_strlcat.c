#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t      i;
    size_t      j;
    size_t      dest_len;
    size_t      src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);

    i = dest_len;
    j = 0;
    while (src[i] && j < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[j] = '\0';
    return j;
}
#include <stdio.h>

int     main(void)
{
    char    dst[15];
    const char    src[] = "Hello World";
    printf("%s\n", dst);
    printf("%i", ft_strlcat(dst, src, sizeof(dst)));
    return (0);
}