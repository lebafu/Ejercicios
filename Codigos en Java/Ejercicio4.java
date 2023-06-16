//4. Verificacion de palindromos: Escribe un programa que solicite al usuario una cadena de texto y determine si es un palindromo. Un palindromo es una palabra, frase o numero que se lee igual de izquierda a derecha y de derecha a izquierda, como "radar" o "anita lava la tina".

import java.util.Scanner;

public class Palindromo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese una cadena de caracteres: ");
        String frase = scanner.nextLine();

        if (esPalindromo(frase)) {
            System.out.println("La frase '" + frase + "' es un palíndromo.");
        } else {
            System.out.println("La frase '" + frase + "' no es un palíndromo.");
        }

        scanner.close();
    }

    public static boolean esPalindromo(String frase) {
        frase = frase.replaceAll("[^a-zA-Z]", "").toLowerCase(); // Eliminar caracteres no alfabéticos y convertir a minúsculas

        int inicio = 0;
        int fin = frase.length() - 1;

        while (inicio < fin) {
            if (frase.charAt(inicio) != frase.charAt(fin)) {
                return false; // No es palíndromo
            }

            inicio++;
            fin--;
        }

        return true; // Es palíndromo
    }
}
