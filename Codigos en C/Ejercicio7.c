//7. Conversi�n de decimal a binario: Implementa un programa que convierta un n�mero decimal ingresado por el usuario a su equivalente en binario utilizando un enfoque iterativo.

#include <stdio.h>


void binario(int num) {
    if (num > 0) {
        binario(num / 2);
        printf("%d", num % 2);
    }
}

int main() {
    int numero;
    printf("Ingrese un número decimal: ");
    scanf("%d", &numero);

    printf("El número binario equivalente es: ");
    binario(numero);
    printf("\n");

    return 0;
}
