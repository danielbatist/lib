//#include "libft.h"

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
/*#include <stdio.h>

int     main(void)
{
        int     num = '0';
        if (ft_isdigit(num) != 0)
        {
                printf("%c it's a number\n", num);
        }
        else
        {
                printf("%c it's not a number\n", num);
        }
}*/