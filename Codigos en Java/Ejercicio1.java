//1. Suma de dos numeros: Escribe un programa que solicite al usuario dos numeros enteros y muestre la suma de los dos n�meros.

import java.util.Scanner;

public class Sumar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese primer numero entero: ");
        int a = scanner.nextInt();

        System.out.print("Ingrese segundo nmero entero: ");
        int b = scanner.nextInt();
        int resultado=a+b;
        System.out.print("La suma de:" + a + "+" + b + "="+ resultado);



        scanner.close();
    }
}
