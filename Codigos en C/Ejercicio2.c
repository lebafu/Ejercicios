//2. N�meros pares e impares: Crea un programa que solicite al usuario un n�mero entero y determine si es par o impar.
#include<stdio.h>

void par_o_impar(int n){
    if(n%2==0){
        printf("El número %d es par.",n);
    }else{
        printf("El número %d es impar.",n);
    }
}

int main() {
    // Declaración de variables
    int a,b,resultado;
    printf("Ingresa el número:\n");
    scanf("%d",&a);
    par_o_impar(a);
    return 0;
}