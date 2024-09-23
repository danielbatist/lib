#include <stdio.h>
#include "ft_abs.h"

int     main(void)
{
    int     a = -5;
    int     b = 3;
    printf("O valor absoluto de %i é: %i\n", a, ABS(a));
    printf("O valor absoluto de %i é: %i\n", b, ABS(b));
    return (0);
}