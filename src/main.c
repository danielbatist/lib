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

// Teste ft_strrchr

/*
#include <stdio.h>

int     main(void)
{
        const char str[] = "Hello World";
        int     letter = 'l';
        char    *result = ft_strrchr(str, letter);

        if (result != NULL)
        {
            printf("The last position of the character %c%c%c is:  %ld\n", '"', letter, '"', result - str);
        }
        else{
            printf("Character %c not found\n", letter);
        }

        return (0);
}
*/

// Teste ft_strnstr


//#include <stdio.h>
/*
 int    main(void)
 {
        const char hay[] = "Hello";
        const char needle[] = "Hello World";
        char *result = ft_strnstr(hay, needle, 13);
        if (result != NULL)
            printf("substring %s found: %s.\n", needle, result);
        else
            printf("substring %s not found.\n", needle);
        return (0);
 }
 */

// Teste ft_memset

/*
int     main(void)
{
        char    str[15] = "Hello World";
        int     chr = '.';
        printf("%s\n", ft_memset(str, chr, 5));
        return(0);
}
*/

// Teste ft_bzero

/*
int     main(void)
{
        size_t      i;
        char        str1[12] = "Hello World";
        //Teste 1
        printf("Teste 1\n"); 
        printf("Before: %s\n", str1);
        ft_bzero(str1, 5);
        i = 0;
        printf("After: ");
        while (i < sizeof(str1))
        {
            if (str1[i] == '\0')
                printf("\\0");
            else
                printf("%c", str1[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 2
        printf("Teste 2\n"); 
        char        str2[6] = "banana";

        printf("Before: %s\n", str2);
        ft_bzero(str2, sizeof(str2));
        i = 0;
        printf("After: ");
        while (i < sizeof(str2))
        {
            if (str2[i] == '\0')
                printf("\\0");
            else
                printf("%c", str2[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 3
        printf("Teste 3\n"); 
        char        str3[1] = "";

        printf("Before: %s\n", str3);
        ft_bzero(str3, 0);
        i = 0;
        printf("After: ");
        while (i < sizeof(str3))
        {
            if (str3[i] == '\0')
                printf("\\0");
            else
                printf("%c", str3[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 4
        printf("Teste 4\n"); 
        char        str4[6] = "Daniel";

        printf("Before: %s\n", str4);
        ft_bzero(str4, 0);
        i = 0;
        printf("After: ");
        while (i < sizeof(str4))
        {
            if (str4[i] == '\0')
                printf("\\0");
            else
                printf("%c", str4[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 5
        printf("Teste 5\n"); 
        char        str5[11] = "abcdefghij";
        printf("Before: %s\n", str5);
        ft_bzero(str5, 20);
        i = 0;
        printf("After: ");
        while (i < sizeof(str5))
        {
            if (str5[i] == '\0')
                printf("\\0");
            else
                printf("%c", str5[i]);
            i++;
        }
        printf("\n");
        printf("\n");

        //Teste 6
        printf("Teste 6\n"); 
        int     str6[5] = {1, 2, 3, 4, 5};
        
        i = 0;
        printf("Before: ");
        while (i < 5)
        {
            printf("%d", str6[i]);
            i++;
        }
        printf("\n");
        ft_bzero(str6, sizeof(str6));
        i = 0;
        printf("After: ");
        while (i < 5)
        {
            if (str6[i] == '\0')
                printf("\\0");
            else
                printf("%d", str6[i]);
            i++;
        }
        printf("\n");
        return (0);
}
*/

// Teste ft_memcpy

/*
int     main(void)
{
    // Teste 01
        printf("Teste 01: ");
        char    src[] = "Hello World";
        char    dst[20];
        size_t  len = 9;
        ft_memcpy(dst, src, len);
        dst[len] = '\0';
        printf("%s\n\n", dst);

    // Teste 02

        printf("Teste 02: ");
        int     src1[] = {1, 2, 3, 4, 5};
        int     dst1[20];
        ft_memcpy(dst1, src1, sizeof(src1));
        for(size_t i = 0; i < 5; i++)
        {
            printf("%d", dst1[i]);
        }
        printf("\n\n");
        
    // Teste 03

        printf("Teste 03: ");
        char dest[10];
        char src2[10];

        ft_memset(src2, 0, sizeof(src2));
        ft_memcpy(dest, src2, 10);
        for(int i = 0; i < 10; i++)
        {
            printf("%d", dest[i]);
        }
        return (0);
}
*/

// ft_memmove

/*
int     main(void)
{
        printf("Teste 01: ");
        char    src[] = "HelloWorld";
        ft_memmove(src + 5, src, 5);
        printf("%s\n", src);

        printf("Teste 02: ");
        char    src1[] = "42 rio";
        char    dest1[15];
        ft_memmove(dest1, src1, sizeof(src1));
        printf("%s\n", dest1);

        printf("Teste 03: ");
        char    src2[] = "Hello World";
        char    dest2[] = "banana";
        ft_memmove(dest1, src1, 0);
        printf("%s\n", dest2);

        printf("Teste 04: ");
        char    src3[] = {1, 2, 3, 4, 5, 6, 7, 8};
        ft_memmove(src3 + 3, src3, 6);
        for (int i = 0; i < 8; i++)
        {
            printf("%d ", src3[i]);
        }
        printf("\n");
        return(0);
}
*/