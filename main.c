#include "libft.h"
#include <stdio.h>

// Teste ft_isalpha
/*#include <stdio.h>
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

/*#include <stdio.h>
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
/*#include <stdio.h>
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
/*#include <stdio.h>
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


// Teste ft_strlen

/*#include <stdio.h>
int     main(void)
{
        char    str[] = "Hello World";
        printf("%zu\n", ft_strlen(str));
        return (0);
}
*/

// Teste ft_strlcpy

/*#include <stdio.h>
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

/*#include <stdio.h>
int     main(void)
{
    const char  str[] = "   +-1234";
    printf("%i\n", ft_atoi(str));
}
*/

// Teste ft_strlcat

/*#include <stdio.h>
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

/*#include <stdio.h>
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

/*#include <stdio.h>
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

/*#include <stdio.h>
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
            printf("Position: %ld\n" , result - str);
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
            printf("Position :  %ld\n" , result - str);
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

/*#include <stdio.h>
int     main(void)
{
        char    str[15] = "Hello World";
        int     chr = '.';
        printf("%s\n", ft_memset(str, chr, 5));
        return(0);
}
*/

// Teste ft_bzero

/*#include <stdio.h>
int     main(void)
{
        //Teste 1
        size_t      i;
        char        str1[12] = "Hello World";
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
        return (0);
}
*/

// Teste ft_memcpy

/*#include <stdio.h>
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

/*#include <stdio.h>
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

// Teste ft_memchr

/*#include <stdio.h>
int     main(void)
{
        char    str[] = "Hello World";
        char    ocr = 'o';
        char    *result = ft_memchr(str, ocr, 10);
        if (result != NULL)
        {
            printf("position: %ld\n", result - str);
        }
        else
        {
        printf("The character %c not a found.\n", ocr);
        }
}
*/

// Teste ft_memcmp

/*#include <stdio.h>
int     main(void)
{
        char    str1[] = "Hello World";
        char    str2[] = "Minishell";
        char    str3[] = "Minihell";
        char    str4[] = "Hello World";

        int     res1 = ft_memcmp(str1, str2, 5);
        printf("ft_memcmp entre Hello World e Minishell: %i\n", res1);
        int     res2 = ft_memcmp(str2, str3, 3);
        printf("ft_memcmp entre Minishell e Minhell: %i\n", res2);
        int     res3 = ft_memcmp(str3, str4, 6);
        printf("ft_memcmp entre Minihell e Hello World: %i\n", res3);
        int     res4 = ft_memcmp(str1, str4, 3);
        printf("ft_memcmp entre Hello World e Hello World: %i\n", res4);
        return (0);
}
*/


// Teste ft_calloc

/*#include <stdio.h>
int     main(void)
{
        printf("Teste 01\n");
        size_t  n1 = 5;
        int     *arr1 = (int *)ft_calloc(n1 , sizeof(int));
        if (arr1 != NULL && n1 > 0)
        {
                for (size_t i = 0; i < n1; i++)
                {
                        printf("%i", arr1[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr1);

        printf("\n\n");

        printf("Teste 02\n");
        size_t  n2 = 4294967296;
        int     *arr2 = (int *)ft_calloc(n2 , 4294967296);
        if (arr2 != NULL && n2 > 0)
        {
                for (size_t i = 0; i < n2; i++)
                {
                        printf("%i", arr2[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr2);

        printf("\n\n");

        printf("Teste 03\n");
        size_t  n3 = 0;
        int     *arr3 = (int *)ft_calloc(n3 , 4);
        if (arr3 != NULL && n3 > 0)
        {
                for (size_t i = 0; i < n3; i++)
                {
                        printf("%i", arr3[i]);
                }
        }
        else
        {
                printf("memory allocation failure");
        }
        free(arr3);

        printf("\n\n");


        
        return(0);
}
*/

// Teste ft_strdup

/*#include <stdio.h>
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
        return (0);
}
*/

// Teste ft_substr

/*
#include <stdio.h>
int		main(void)
{
	char const	*str = "Hello World";
	unsigned int	pos = 6;
	char	*res = ft_substr(str, pos, 5);
	printf("string: %s\n", str);
	printf("substring: %s\n", res);
	return (0);
}*/

// Teste ft_strjoin

/*#include <stdio.h>
int		main(void)
{
	char	*str1 = "Hello ";
	char	*str2 = "World";
	char	*res = ft_strjoin(str1, str2);
	printf("New string: %s\n", res);
	free(res);
	return (0);
}
*/

// Teste ft_strtrim

/*#include <stdio.h>
 int		main(void)
{
	char	*str = "        Hello World         ";
	char	*set  = " ";
	char	*res = ft_strtrim(str, set);
	printf("res:%s\n", res);
	return (0);
}
*/

// Teste ft_split

/*
#include <stdio.h>

int		main(void)
{
	char	*str = "Hello;world;this;is;test;banana;42;rio";
	char	set = ';';
	char	**res = ft_split(str, set);
	int		i;

	i = 0;
	while (res[i])
	{
		printf ("str[%i] : %s\n", i, res[i]);
		i++;
	}
	return (0);
}
*/

// Teste ft_itoa

/*#include <stdio.h>
int	main(void)
{
	int		num = -123454596;
	char	*res = ft_itoa(num);
	printf("num: %s\n", res);
	return (0);
}
*/

// Teste ft_strmapi

/*#include <stdio.h>
char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
int		main(void)
{
	const char	str[] = "Hello World";
	char	*res = ft_strmapi(str, ft_upper);
	printf("%s\n", res);
	return (0);
}
*/

// Teste ft_striteri

/*#include <stdio.h>
void	ft_upper(unsigned int i, char * c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}
int		main(void)
{
	char	str[] = "hello world";
	ft_striteri(str, ft_upper);
	printf("%s\n", str);
	return (0);
}
*/

// Teste ft_putchar_fd

/*#include <stdio.h>
int		main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}*

// Teste ft_putstr_fd

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello World";
	ft_putstr_fd(str, 1);
}
*/

// Teste ft_putendl_fd

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello World";
	ft_putendl_fd(str, 1);
}
*/

// Teste ft_putnbr_fd

/*#include <stdio.h>
int	main(void)
{
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
}
*/
___________________________________________________________________
//\\//\\//\\//\\//\\//\\//\\//BONUS\\//\\//\\//\\//\\//\\//\\//\\//

// Teste ft_lstnew

/*
#include <stdio.h>

int     main(void)
{
    char    *nome = "Hello World";
    t_list *str = ft_lstnew(nome);
    printf("%s\n", (char *)str->content);

}*/

// Teste ft_lstadd_front

/*
#include <stdio.h>

int		main(void)
{
	t_list	*head = ft_lstnew("Hello World");
	t_list	*t1;

	t1->content = (char *)"banana";
	head->next = &t1;
	ft_lstadd_front(&head, ft_lstnew((char *) "new"));
	t_list	*it;

	it = head;
	while (it != NULL)
	{
		printf("%s\n", (char *)it->content);
		it = it->next;
	}
*/

// Teste ft_lstadd_back

/*
#include <stdio.h>

int		main(void)
{
	t_list	*head = ft_lstnew("Hello");
	t_list	*node1 = ft_lstnew("World");
    t_list	*node2 = ft_lstnew("Daniel");
	
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	
	while (head != NULL)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
    return (0);
}*/

// Teste ft_lstclear

/*
#include <stdio.h>

int     main(void)
{
	t_list	*tmp;
        t_list	*head = ft_lstnew(strdup("Hello"));
	t_list	*node1 = ft_lstnew(strdup("World"));
	t_list	*node2 = ft_lstnew(strdup("Daniel"));

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	tmp = head;
	printf("Before Cleared:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstclear(&head, del);
	printf("After Cleared:\n");
	if (head == NULL)
		printf("List is cleared.\n");
	return (0);
}*/

// Teste ft_lstsize

/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew((int *)10);
	t_list *node2 = ft_lstnew((int *)20);
	t_list *node3 = ft_lstnew((int *)30);

	node1->next = node2;
	node2->next = node3;
	head = node1;
	printf("%d\n", ft_lstsize(head));
}*/

// Teste ft_delone
/*
void	del(void *content)
{
	free(content);
}*/
/*
#include <stdio.h>

int     main(void)
{
	t_list	*tmp;
        t_list	*head = ft_lstnew(strdup("Hello"));
	t_list	*node1 = ft_lstnew(strdup("World"));
	t_list	*node2 = ft_lstnew(strdup("Daniel"));

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	tmp = head;
	printf("Before delection:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	
	ft_lstdelone(node1, del);
	
	head->next = node2;
	tmp = head;
	printf("After delection:\n");
	while (tmp != NULL)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	ft_lstdelone(head, del);
	ft_lstdelone(node2, del);
    return (0);
}*/

// Teste ft_lstiter
/*
#include <stdio.h>
void	ft_print(void *content)
{
	printf("%s\n", (char *)content);
}

void	ft_lstup(void *content)
{
	char	*str = (char *)content;

	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}*/
/*
#include <stdio.h>
int     main(void)
{
        t_list	*head = ft_lstnew(strdup("hello"));
	t_list	*node1 = ft_lstnew(strdup("world"));
	t_list	*node2 = ft_lstnew(strdup("daniel"));

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printf("Before Uppercase\n");
	ft_lstiter(head, ft_print);
	ft_lstiter(head, ft_lstup);
	printf("After Uppercase\n");
	ft_lstiter(head, ft_print);
	return (0);
}*/

// Teste ft_lstlast

/*
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("hello");
	t_list *node2 = ft_lstnew("world");
	t_list *node3 = ft_lstnew("banana");

	node1->next = node2;
	node2->next = node3;
	head = node1;
	t_list *res = ft_lstlast(head);
	if (res != NULL)
	{
		printf("The last node: %s", (char *)res->content);
	}
}
*/