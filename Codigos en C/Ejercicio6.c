//6. C�lculo del factorial: Crea un programa que solicite al usuario un n�mero entero y calcule su factorial utilizando una funci�n recursiva.

#include<stdio.h>

int factorial(int n){

    if(n==0){

        return 1;
    }else{
        return(n*factorial(n-1));
    }
}

int main() {
    // Declaración de variables
    int numero,resultado;
    printf("Ingresa número entero:\n");
    scanf("%d",&numero);
    resultado=factorial(numero);
    printf("El factorial de %d es:%d\n",numero,resultado);
    return 0;
}