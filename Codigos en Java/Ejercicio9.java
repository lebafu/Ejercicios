//9. Calculo de la suma de digitos: Implementa un programa que solicite al usuario un numero entero y calcule la suma de sus digitos de manera recursiva.

import java.util.Scanner;

public class Sumar_Digitos {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese numero: ");
        int numero = scanner.nextInt();

        int resultado=sumar_digitos(numero);
        System.out.println("La suma de los digitos del numero "+ numero +" es:"+ resultado);
        scanner.close();
    }

    public static int suma_digitos(int n) {
        if(n>0){
            return n%10+suma_digitos(n/10);
            //System.out.print(n%2);
        }else{
            return 0;
        }
    }
}