#include <stdio.h>
int main()
{
    int x = 2;

    if (x == 1)
        goto caso1;
    if (x == 2)
        goto caso2;
    if (x == 3)
        goto caso3;
    goto caso_default;

caso1:
    printf("Caso 1\n");
    goto fin;

caso2:
    printf("Caso 2\n");
    goto fin;

caso3:
    printf("Caso 3\n");
    goto fin;

caso_default:
    printf("Caso por defecto\n");

fin:
    return 0;
}
