#include <stdio.h>
int main()
{
    int x = 0;

hacer_bucle:
    printf("x = %d\n", x);
    x++;
    if (x < 5)
        goto hacer_bucle;

    return 0;
}
