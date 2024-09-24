#include "libft.h"

int     ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    else{
        return (0);
    }
}
/*#include <stdio.h>

int     main(void)
{
        unsigned char     asc = 's';
        if (ft_isascii(asc) != 0)
        {
                printf("%i belongs to the ascii table\n", asc);
        }
        else
        {
                printf("%i belongs to the ascii table\n", asc);
        }
}*/