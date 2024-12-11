#include <stdio.h>
int main()
{
    int x = 0;

do_while:
    printf("x = %d\n", x);
    x++;
    if (x < 5)
        goto do_while;

    return 0;
}
