//5. Ordenamiento de un arreglo: Escribe un programa que ordene un arreglo de numeros enteros de forma ascendente utilizando el algoritmo de seleccion.

import java.util.Scanner;

public class Sumar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese cantidad de numeros que desea tenga el arreglo: ");
        int cantidad = scanner.nextInt();
        int[] arreglo = new int[cantidad];

        for (int i = 0; i < cantidad; i++) {
            System.out.print("Ingrese el numero " + (i + 1) + ": ");
            arreglo[i] = scanner.nextInt();
        }

        ordenAscendente(arreglo, cantidad);

        scanner.close();
    }

    public static void ordenAscendente(int[] arreglo, int cantidad) {
        int aux;
        for (int i = 0; i < cantidad - 1; i++) {
            for (int j = 0; j < cantidad - i - 1; j++) {
                if (arreglo[j] > arreglo[j + 1]) {
                    aux = arreglo[j];
                    arreglo[j] = arreglo[j + 1];
                    arreglo[j + 1] = aux;
                }
            }
        }

        System.out.println("Los elementos ordenados en forma ascendente:\n");
        for (int i = 0; i < cantidad; i++) {
            System.out.println(arreglo[i]);
        }
    }
}