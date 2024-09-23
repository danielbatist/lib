//#include "libft.h"
#include <stdio.h>

/*// Teste ft_isalpha
int     main(void)
{
        char    c = 'a';
        if (ft_isalpha(c) != 0)
        {
                printf("%c is an alphabetic character\n", c);
        }
        else
        {
                printf("%c is not an alphabetic character\n", c);
        }

        return (0);
}*/

/*// Teste ft_isdigit
int     main(void)
{
        int     num = 9;
        if (ft_isdigit(num) != 0)
        {
                printf("%i it's an number\n", num);
        }
        else
        {
                printf("%i it's not a number\n", num);
        }
}*/

// Teste ft_isalnum
int     main(void)
{
        int     alnum = '7';
        if (ft_isalnum(alnum) != 0)
        {
                printf("%i it's an alphanumeric\n", alnum);
        }
        else
        {
                printf("%i it's not an alphanumeric\n", alnum);
        }
}