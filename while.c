#include <stdio.h>
int main()
{
    int x = 0;

inicio_bucle:
    if (x >= 5)
        goto fin;
    printf("x = %d\n", x);
    x++;
    goto inicio_bucle;

fin:
    return 0;
}
