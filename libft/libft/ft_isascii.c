#include "libft.h"

int     ft_isascii(int c)
{
    if (c < 128)
    {
        return (1);
    }
    else{
        return (0);
    }
}
#include <stdio.h>

int     main(void)
{
        int     asc = 's';
        if (ft_isascii(asc) != 0)
        {
                printf("%i it's an alphanumeric\n", asc);
        }
        else
        {
                printf("%i it's not an alphanumeric\n", asc);
        }
}