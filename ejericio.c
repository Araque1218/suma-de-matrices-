#include<stdio.h>

int main(int argc, char const *argv[])
{
    int Z[3][2], X[3][2], Y[3][2], num;

    // Ingresar los numeros de la matriz X
    printf("Ingrese los elementos de la matriz X:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num);
            X[i][j] = num;
        }
    }

    // Ingresar los numeros de la matriz Y
    printf("Ingrese los elementos de la matriz Y:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &num);
            Y[i][j] = num;
        }
    }

    // Sumar las matrices X y Y
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }

    // Imprimir el resultado
    printf("La suma de las matrices es:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", Z[i][j]);
        }
        printf("\n");
    }

    return 0;
}
