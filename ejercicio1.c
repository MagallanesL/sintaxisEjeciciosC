#include <stdio.h>

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("El numero es Positivo %d\n", num);
    }
    else if (num == 0)
    {
        printf("Es Neutro");
    }
    else
    {
        printf("El numero es Negativo\n");
    }

    return 0;
}