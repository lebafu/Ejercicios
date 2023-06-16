//7. Conversi�n de decimal a binario: Implementa un programa que convierta un n�mero decimal ingresado por el usuario a su equivalente en binario utilizando un enfoque iterativo.

import java.util.Scanner;

public class Sumar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese numero: ");
        int numero = scanner.nextInt();

        binario(numero);
        scanner.close();
    }

    public static void binario(int n) {
        if(n>0){
            binario(n/2);
            System.out.print(n%2);
        }
    }
}