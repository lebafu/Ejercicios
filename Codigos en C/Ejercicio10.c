//10. Cifrado C�sar: Crea un programa que solicite al usuario una cadena de texto y un n�mero de desplazamiento, y cifre el mensaje utilizando el cifrado C�sar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char abecedario1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char abecedario2[] = "abcdefghijklmnopqrstuvwxyz";
    char* cadena = NULL;
    char* cadena_cifrada = NULL;
    size_t longitud = 0;
    int desplazamiento;

    printf("Ingrese una cadena de caracteres: ");
    getline(&cadena, &longitud, stdin);

    printf("La cadena ingresada es: %s", cadena);

    printf("Ingrese el desplazamiento para el cifrado de Cesar: ");
    scanf("%d", &desplazamiento);

    size_t len = strlen(cadena);
    cadena_cifrada = malloc(len + 1);  // Asignar memoria para cadena_cifrada

    for (size_t i = 0; i < len; i++) {
        if (isupper(cadena[i])) {
            size_t j = (cadena[i] - 'A' + desplazamiento) % 26;
            cadena_cifrada[i] = abecedario1[j];
        } else if (islower(cadena[i])) {
            size_t j = (cadena[i] - 'a' + desplazamiento) % 26;
            cadena_cifrada[i] = abecedario2[j];
        } else {
            cadena_cifrada[i] = cadena[i];  // Conservar caracteres no alfabéticos
        }
    }
    cadena_cifrada[len] = '\0';  // Agregar el carácter nulo al final de cadena_cifrada

    printf("La cadena original es: %s\n", cadena);
    printf("La cadena cifrada es: %s\n", cadena_cifrada);

    free(cadena);  // Liberar memoria asignada por getline()
    free(cadena_cifrada);  // Liberar memoria asignada por malloc()

    return 0;
}
