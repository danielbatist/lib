#include "libft.h"

char    *ft_strdup(const char *s)
{
        size_t      len = ft_strlen(s);
        char        *cpy = (char *)malloc((len + 1) * (sizeof(char)));
        if (cpy == NULL)
        {
            return NULL;
        }
        else
        {
            ft_strlcpy(cpy, s, len + 1);
        }
        return (cpy);
}

#include <stdio.h>

int     main(void)
{
        printf("Teste 01\n");
        char    str1[] = "Hello World";
        char    *cpy1 = ft_strdup(str1);
        printf("str1: %s\n", str1);
        if (cpy1 != NULL)
        {
            printf("cpy1: %s", cpy1);
        }
        else
        {
            printf("Error!");
        }
        free(cpy1);

        printf("\n\n");

        printf("Teste 02\n");
        char    str2[] = "";
        char    *cpy2 = ft_strdup(str2);
        printf("str2: %s\n", str2);
        if (cpy2 != NULL)
        {
            printf("cpy2: %s", cpy2);
        }
        else
        {
            printf("Error!");
        }
        free(cpy2);

        printf("\n\n");

        printf("Teste 03\n");
        char str3[] = "Lebenslanger Schicksalschatz";
        char    *cpy3 = ft_strdup(str3);
        printf("str3: %s\n", str3);
        if (cpy3 != NULL)
        {
            printf("cpy3: %s", cpy3);
        }
        else
        {
            printf("Error!");
        }
        free(cpy3);

        printf("\n\n");

        printf("Teste 04\n");
        char str4[] = "A very long string to check if the allocation and copying are correct";
        char    *cpy4 = ft_strdup(str4);
        printf("str4: %s\n", str4);
        if (cpy4 != NULL)
        {
            printf("cpy4: %s", cpy4);
        }
        else
        {
            printf("Error!");
        }
        free(cpy4);

        printf("\n");
        return (0);
}
