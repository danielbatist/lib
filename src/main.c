#include "libft.h"
#include <stdio.h>

// Teste ft_isalpha
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
}

// Teste ft_isdigit
/*
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
/*
int     main(void)
{
        int     alnum1 = '7';
        int     alnum2 = 'a';
        int     alnum3 = '@';

        if (ft_isalnum(alnum1) != 0)
                printf("%c it's an alphanumeric\n", alnum1);
        else
                printf("%c it's not an alphanumeric\n", alnum1);
        if (ft_isalnum(alnum2) != 0)
                printf("%c it's an alphanumeric\n", alnum2);
        else
                printf("%c it's not an alphanumeric\n", alnum2);
        if (ft_isalnum(alnum3) != 0)
                printf("%c it's an alphanumeric\n", alnum3);
        else
                printf("%c it's not an alphanumeric\n", alnum3);
}*/

// Teste ft_isascii
/*
int     main(void)
{
        unsigned char     asc1 = 57; // character '9'
        unsigned char     asc2 = 32; // character ' '
        unsigned char     asc3 = 130; // character 'é'

        if (ft_isascii(asc1) != 0)
                printf("%i belongs to the ascii table\n", asc1);
        else
                printf("%i doesn't belong to the ascii table\n", asc1);
        if (ft_isascii(asc2) != 0)
                printf("%i belongs to the ascii table\n", asc2);
        else
                printf("%i doesn't belong to the ascii table\n", asc2);
        if (ft_isascii(asc3) != 0)
                printf("%i belongs to the ascii table\n", asc3);
        else
                printf("%i doesn't belong to the ascii table\n", asc3);
}*/

// Teste ft_isprint
/*
int     main(void)
{
        unsigned char     imp1 = '\n'; // character '9'
        unsigned char     imp2 = 32; // character ' '
        unsigned char     imp3 = '\t'; // character 'é'

        if (ft_isprint(imp1) != 0)
                printf("%i is a printable character\n", imp1);
        else
                printf("%i is not a printable character\n", imp1);
        if (ft_isprint(imp2) != 0)
                printf("%i is a printable character\n", imp2);
        else
                printf("%i is not a printable character\n", imp2);
        if (ft_isprint(imp3) != 0)
                printf("%i is a printable character\n", imp3);
        else
                printf("%i is not a printable character\n", imp3);
}*/

// Teste ft_strlen
/*
int     main(void)
{
        char    str[] = "Hello World";
        printf("%zu\n", ft_strlen(str));
        return (0);
}*/

// Teste ft_strlcpy
/*
int     main(void)
{
        char    dst[20];
        char    src[] = "Hello World";
        unsigned int result = ft_strcpy(dst, src, sizeof(dst));
        printf("%s", dst);
        printf("%i", result);
}*/

// Teste ft_strlcpy

/*
#include <stdlib.h>
int     main(void)
{
        char    dst[15];
        const char  src[] = "Hello World";
        size_t result = ft_strlcpy(dst, src, sizeof(dst));
        if (sizeof(dst) < result)
        {
                printf("string truncation\n");
                printf("%s\n", dst);
                printf("%zu\n", result);
        }
        else
        {
                printf("%s\n", dst);
                printf("%zu\n", result);
        }
}
*/