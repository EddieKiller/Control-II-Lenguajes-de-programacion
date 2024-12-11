#include <stdio.h>
int main()
{
    int i = 0;

inicio_bucle:
    if (i >= 5)
        goto fin;
    printf("i = %d\n", i);
    i++;
    goto inicio_bucle;

fin:
    return 0;
}
