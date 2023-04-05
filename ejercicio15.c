#include <stdio.h>

int rutaentreciudades[5][5];

void CargarRuta()
{
    int i, j;
    printf("Ingrese la distancia en kilómetros entre cada ciudad (0 si no hay ruta):\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Ciudad %d a Ciudad %d: ", i, j);
            scanf("%d", &rutaentreciudades[i][j]);
        }
    }
}

void ModificarRuta()
{
    int i, j, distancia;
    printf("Ingrese la ciudad de origen y la ciudad de destino que desea modificar:\n");
    printf("Ciudad de origen: ");
    scanf("%d", &i);
    printf("Ciudad de destino: ");
    scanf("%d", &j);
    printf("Ingrese la nueva distancia en kilómetros (0 si se bloquea la ruta): ");
    scanf("%d", &distancia);
    rutaentreciudades[i][j] = distancia;
}

int main()
{
    int i, j;
    CargarRuta();
    printf("Distancias entre ciudades:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", rutaentreciudades[i][j]);
        }
        printf("\n");
    }
    ModificarRuta();
    printf("Distancias actualizadas entre ciudades:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", rutaentreciudades[i][j]);
        }
        printf("\n");
    }
    return 0;
}