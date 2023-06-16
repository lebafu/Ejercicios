//1. Suma de dos n�meros: Escribe un programa que solicite al usuario dos n�meros enteros y muestre la suma de los dos n�meros.
#include<stdio.h>
int main() {
    // Declaración de variables
    int a,b,resultado;
    printf("Ingresa el primer número:\n");
    scanf("%d",&a);
    printf("Ingresa el segundo número:\n");
    scanf("%d",&b);
    resultado= a+b;
    printf("El resultado de la suma:%d+%d es: %d\n",a,b,resultado);
    // Código

    return 0;
}