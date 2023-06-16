//8. Juego de adivinar el n�mero: Escribe un programa que genere un n�mero aleatorio y permita al usuario adivinarlo. El programa debe dar pistas indicando si el n�mero ingresado es mayor o menor que el n�mero generado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generarNumeroAleatorio(int min, int max) {
    return min + rand() % (max - min + 1);
}



int main() {
     // Configurar la semilla aleatoria usando la hora actual
    srand(time(NULL));

    int minimo = 1;
    int maximo = 10;
    int numeroAleatorio = generarNumeroAleatorio(minimo, maximo);
    int numero;

    printf("Ingrese un número para intentar adivinar numero generado: ");
    scanf("%d", &numero);
    while(numeroAleatorio!=numero){
        if(numero<numeroAleatorio){
            printf("El número %d ingresado es menor que el número aleatorio generado\n",numero);
        }else{
            if(numero>numeroAleatorio){
                 printf("El número %d ingresado es mayor que el número aleatorio generado\n",numero);
            }
        }

        printf("Ingrese un número para intentar adivinar numero generado:");
        scanf("%d", &numero);

    }

    printf("Felicidades el número generado aleatoriamente era %d\n",numeroAleatorio);
    return 0;
}
