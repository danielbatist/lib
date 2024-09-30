 #include "libft.h"

 char   *ft_strnstr(const char *big, const char *little, size_t len)
 {
        size_t      i;
        size_t      j;
        const char *b;
        const char *l;

        if (*little == '\0')
        {
            return (char *)big;
        }
        i = 0;
        while (*big && i < len)
        {
            b = big;
            l = little;
            j =0;
            while (*b && *l && *b == *l && i + j < len)
            {
    
                b++;
                l++;
                j++;
            }
            if (*l == '\0')
            {
                return (char *)big;
            }
            big++;
            i++;
        }
        return NULL;
 }
