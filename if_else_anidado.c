#include <stdio.h>
int main()
{
    int x = 15;

    if (x > 10)
    {
        if (x < 20)
            goto entre;
        else
            goto mayor;
    }
    else
    {
        goto menor;
    }

entre:
    printf("x está entre 10 y 20\n");
    goto fin;

mayor:
    printf("x es mayor que 20\n");
    goto fin;

menor:
    printf("x es menor o igual a 10\n");

fin:
    return 0;
}
