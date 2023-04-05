#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Introduce un numero entero (0 para salir): ");
        scanf("%d", &num);
        printf("El numero introducido es: %d\n", num);
    } while (num != 0);
    printf("Fin del programa.\n");
    return 0;
}
