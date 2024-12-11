#include <stdio.h>
int main()
{
    int x = 0;

inicio_bucle:
    if (x == 3)
        goto salir;
    printf("x = %d\n", x);
    x++;
    if (x < 5)
        goto inicio_bucle;

salir:
    printf("Bucle terminado\n");

    return 0;
}
