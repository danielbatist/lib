#include "libft.h"

int     ft_atoi(const char *str)
{
    int     i;
    int     sign;
    int     result;
    int     tmp;

    i = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    sign = 1;
    tmp = 0;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
        tmp++;
    }
    if (tmp > 1)
    {
        return (0);
    }
    result = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);

}

