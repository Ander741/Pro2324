//
// Created by santi on 20/10/2023.
//
#include <stdio.h>
#include <math.h>
int main(){
    float numero;
    float n;
    float potencia;

    printf("Introduzca el numero del que desea calcular la potencia:\n");
    scanf("%f",&numero);

    while(numero>=0){
        printf("Introduzca la potencia a la que desea elevar (introduzca un 0 para detenerse):\n");
        scanf("%f",&n);
        potencia= pow(numero,n);
        printf("%.2f\n",potencia);
        if(n==0){
            break;
        }


    }
    return 0;



}