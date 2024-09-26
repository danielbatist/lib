#include "libft.h"
#include <stdio.h>

// Teste ft_isalpha
/*
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
*/

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
}
*/

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

// Teste ft_atoi

/*
#include <stdlib.h>
int     main(void)
{
    const char  str[] = "   +-1234";
    printf("%i\n", atoi(str));
    printf("%i\n", ft_atoi(str));
}
*/

// Teste ft_strlcat

/*
int     main(void)
{
    char    dst[8] = "Hello ";
    const char    src[] = "World";
    size_t result = ft_strlcat(dst, src, sizeof(dst));
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

// Teste ft_strncmp

/*
int     main(void)
{
        const char  str1[] = "Hello";
        const char  str2[] = "Hell";
        const char  str3[] = "World";
        const char  str4[] = "Work";

        printf("%i\n" , ft_strncmp(str1, str2, 5));
        printf("%i\n" , ft_strncmp(str1, str3, 3));
        printf("%i\n" , ft_strncmp(str3, str4, 3));
        printf("%i\n" , ft_strncmp(str4, str1, 2));
}*/

// Teste ft_toupper

/*
int     main(void)
{
        char    letter = 'a';
        int result = ft_toupper(letter);
        if (result == letter)
            printf("No need to convert to uppercase: %c\n", result);
        else
            printf("letter converted to uppercase: %c\n", result);
        return(0);
}
*/

// Teste ft_tolower

/*
int     main(void)
{
        char    letter = 'L';
        int result = ft_tolower(letter);
        if (result == letter)
            printf("No need to convert to lowercase: %c\n", result);
        else
            printf("letter converted to lowercase: %c\n", result);
        return(0);
}
*/

// Teste ft_strchr

/*
#include <stdio.h>

int     main(void)
{
        const char str[] = "Hello World";
        int     letter = 'y';
        char    *result = ft_strchr(str, letter);

        if (result != NULL)
        {
            printf("Character %c found at position: %ld\n", letter, result - str);
        }
        else{
            printf("Character %c not found\n", letter);
        }

        return (0);
}
*/