//4. Verificaci�n de pal�ndromos: Escribe un programa que solicite al usuario una cadena de texto y determine si es un pal�ndromo. Un pal�ndromo es una palabra, frase o n�mero que se lee igual de izquierda a derecha y de derecha a izquierda, como "radar" o "anita lava la tina".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool es_palindromo(const char* cadena_caracteres) {
    int inicio = 0;
    int fin = strlen(cadena_caracteres) - 1;

    while (inicio < fin) {
        // Ignorar caracteres no alfabéticos
        while (!isalpha(cadena_caracteres[inicio])) {
            inicio++;
        }
        while (!isalpha(cadena_caracteres[fin])) {
            fin--;
        }

        // Comparar caracteres ignorando mayúsculas y minúsculas
        if (tolower(cadena_caracteres[inicio]) != tolower(cadena_caracteres[fin])) {
            return false;  // No es palíndromo
        }

        inicio++;
        fin--;
    }

    return true;  // Es palíndromo
}

int main() {
    char cadena_caracteres[100];

    printf("Ingrese una cadena de texto: ");
    fgets(cadena_caracteres, sizeof(cadena_caracteres), stdin);

    // Eliminar salto de línea final generado por fgets
    cadena_caracteres[strcspn(cadena_caracteres, "\n")] = '\0';

    if (es_palindromo(cadena_caracteres)) {
        printf("La cadena '%s' es un palíndromo.\n", cadena_caracteres);
    } else {
        printf("La cadena '%s' no es un palíndromo.\n", cadena_caracteres);
    }

    return 0;
}

