//
// Created by Pablo on 06/12/2023.
//
// Librerías
#include <stdio.h>

// Main
int main() {
    float capital, interes, t;

    printf("Introduzca el capital invertido: ");
    scanf("%f", &capital);
    printf("Introduzca el porcentaje de interés anual: ");
    scanf("%f", &interes);
    // Fórmula capital * (1 + interes * t) = 2 * capital
    t = 1 / (float) (interes);
    printf("Se tardarán %.1f años en duplicar el capital invertido.", t);

    return 0;
}
