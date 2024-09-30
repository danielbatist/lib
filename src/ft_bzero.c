#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned char *ptr;

        ptr = (unsigned char *)s;
        while (n > 0)
        {
            *ptr = '\0';
            ptr++;
            n--;
        }
}

#include <stdio.h>

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