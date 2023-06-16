//8. Juego de adivinar el numero: Escribe un programa que genere un numero aleatorio y permita al usuario adivinarlo. El programa debe dar pistas indicando si el numero ingresado es mayor o menor que el numero generado.


import java.util.Scanner;
import java.util.Random;

public class Adivinar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        int numeroAleatorio = random.nextInt(10) + 1; // Genera un numero aleatorio entre 1 y 10

        System.out.println("Ingrese un numero: ");
        int numero = scanner.nextInt();

        adivina(numeroAleatorio, numero);
        scanner.close();
    }

    public static void adivina(int numeroAleatorio, int numero) {
        while (numeroAleatorio != numero) {
            if (numero > numeroAleatorio) {
                System.out.println("El numero aleatorio es menor al numero " + numero + " ingresado.");
            } else {
                System.out.println("El numero aleatorio es mayor al numero " + numero + " ingresado.");
            }
            System.out.print("Ingrese otro numero para tratar de adivinar: ");
            Scanner scanner = new Scanner(System.in);
            numero = scanner.nextInt();
        }

        System.out.println("Felicidades! Has adivinado el numero generado aleatoriamente: " + numero);
    }
}
