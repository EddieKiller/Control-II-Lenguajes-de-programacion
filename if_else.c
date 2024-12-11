#include <stdio.h>
int main()
{
    int x = 10;

    if (x > 5)
        goto mayor;
    else
        goto menor;

mayor:
    printf("x es mayor que 5\n");
    goto fin;

menor:
    printf("x es menor o igual a 5\n");

fin:
    return 0;
}
