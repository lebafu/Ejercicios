//9. C�lculo de la suma de d�gitos: Implementa un programa que solicite al usuario un n�mero entero y calcule la suma de sus d�gitos de manera recursiva.

#include <stdio.h>


void suma_digitos(int num) {
    if (num>0) {
        +suma_digitos(num/10);
        printf("%d",num % 10);
        return num%10+(suma_digitos(num/10));
    }
}

int main() {
    int numero,suma;
    printf("Ingrese un número decimal: ");
    scanf("%d", &numero);
    suma=suma_digitos(numero);
    printf("La suma de los dígitos es:%d\n",suma);

    return 0;
}
