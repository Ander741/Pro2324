//
// Created by Pablo on 16/11/2023.
//
#include <stdio.h>
void imprimeLBlanco(int nlineas);
int main() {
    int n;
    printf("¿Cuantas líneas en blanco quieres que imprima? ");
    scanf("%d",&n);
    imprimeLBlanco(n);
    return 0;
}
void imprimeLBlanco(int nlineas){
    for(nlineas; nlineas > 0; nlineas--) printf("\n");
}
