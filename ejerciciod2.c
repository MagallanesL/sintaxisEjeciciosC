#include <stdio.h>

void imprimir_triangulo(char letra, int ancho)
{
    int altura = ancho;
    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= ancho; j++)
        {
            if (j <= altura - i)
            {
                printf(" ");
            }
            else
            {
                printf("%c", letra);
            }
        }
        printf("\n");
    }
}

int main()
{
    char letra;
    int ancho;

    printf("Introduce una letra: ");
    scanf("%c", &letra);

    printf("Introduce el ancho inicial del triángulo: ");
    scanf("%d", &ancho);

    imprimir_triangulo(letra, ancho);

    return 0;
}