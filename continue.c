#include <stdio.h>
int main()
{
    int x = 0;

inicio_bucle:
    if (x == 2)
    {
        x++;
        goto siguiente_iteracion;
    }
    printf("x = %d\n", x);

siguiente_iteracion:
    x++;
    if (x < 5)
        goto inicio_bucle;

    return 0;
}
