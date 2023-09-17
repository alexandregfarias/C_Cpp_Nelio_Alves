#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia_percorrida;
    double combustivel_gasto, consumo_medio;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia_percorrida);

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel_gasto);

    consumo_medio = (distancia_percorrida / (double)combustivel_gasto);

    printf("Consumo médio = %.3lf", consumo_medio);

    return 0;
}
