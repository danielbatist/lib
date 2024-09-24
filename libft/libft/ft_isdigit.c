#include "libft.h"

int     ft_isdigit(int c)
{
    if (c >= 48 && c < 58)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}