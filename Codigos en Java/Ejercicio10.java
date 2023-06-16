//10. Cifrado Cesar: Crea un programa que solicite al usuario una cadena de texto y un numero de desplazamiento, y cifre el mensaje utilizando el cifrado Csar.

import java.util.Scanner;

public class CifradoCesar {
    public static void main(String[] args) {
        String abecedario1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String abecedario2 = "abcdefghijklmnopqrstuvwxyz";
        String cadena;
        String cadena_cifrada = "";
        int desplazamiento;

        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese una cadena de caracteres: ");
        cadena = scanner.nextLine();

        System.out.println("La cadena ingresada es: " + cadena);

        System.out.print("Ingrese el desplazamiento para el cifrado de Cesar: ");
        desplazamiento = scanner.nextInt();

        int len = cadena.length();
        for (int i = 0; i < len; i++) {
            char c = cadena.charAt(i);
            if (Character.isUpperCase(c)) {
                int j = (c - 'A' + desplazamiento) % 26;
                cadena_cifrada += abecedario1.charAt(j);
            } else if (Character.isLowerCase(c)) {
                int j = (c - 'a' + desplazamiento) % 26;
                cadena_cifrada += abecedario2.charAt(j);
            } else {
                cadena_cifrada += c;  // Conservar caracteres no alfabéticos
            }
        }

        System.out.println("La cadena original es: " + cadena);
        System.out.println("La cadena cifrada es: " + cadena_cifrada);

        scanner.close();
    }
}
