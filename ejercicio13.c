#include <stdio.h>

int main()
{
    int notas[2][5];
    int i, j, nota, sumas[2] = {0};

    for (i = 0; i < 2; i++)
    {
        printf("Notas del grado %d:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Ingrese la nota del alumno %d: ", j + 1);
            scanf("%d", &nota);
            notas[i][j] = nota;
            sumas[i] += nota;
        }
    }

    for (i = 0; i < 2; i++)
    {
        printf("El promedio del grado %d es %.2f\n", i + 1, (float)sumas[i] / 5);
    }

    int mayor_nota = notas[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (notas[i][j] > mayor_nota)
            {
                mayor_nota = notas[i][j];
            }
        }
    }
    printf("La mayor nota en general es %d\n", mayor_nota);

    // Imprimir todas las notas
    for (i = 0; i < 2; i++)
    {
        printf("Notas del grado %d:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Alumno %d: %d\n", j + 1, notas[i][j]);
        }
    }

    int aprobados[2] = {0}, reprobados[2] = {0};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (notas[i][j] >= 7)
            {
                aprobados[i]++;
            }
            else
            {
                reprobados[i]++;
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("En el grado %d aprobaron %d y reprobaron %d\n", i + 1, aprobados[i], reprobados[i]);
    }

    return 0;
}
