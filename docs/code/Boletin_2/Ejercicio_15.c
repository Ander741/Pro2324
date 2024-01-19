//
// Created by pablo on 25/10/2023.
//
/*
 * AUTOR: PABLO PORTAS
 * OBJETIVO:
 *      Plantee e implemente un programa en Lenguaje C que presente el menú que se
 *       especifica a continuación y que, según sea el carácter introducido por el
 *       usuario, escriba en pantalla BEBÉ, ADOLESCENTE, MUJER, HOMBRE.
 * in: Carácter
 * out: Escriba en pantalla que eligió
 * NOTA1:
 */
#include <stdio.h>
#include <stdbool.h>

int main() {
    char c;

    bool nocontinuar;
    do {
        nocontinuar = false;
        printf("\t\t¿Que eres?\n------------------------\n B - Bebé\n A - Adolescente\n M - Mujer\n H - Hombre\n");
        printf("\nIntroduzca el carácter correcto: ");
        int n;
        gets(&c);

        switch (c) {
            case 'B':
            case 'b':
                printf("BEBÉ");
                break;
            case 'A':
            case 'a':
                printf("ADOLESCENTE");
                break;
            case 'M':
            case 'm':
                printf("MUJER");
                break;
            case 'H':
            case 'h':
                printf("HOMBRE");
                break;
            default:
                printf("\nError: Opción no válida.\n\n");
                nocontinuar=true;
                break;
        }
    } while(nocontinuar);

    return 0;
}
