//2. N�meros pares e impares: Crea un programa que solicite al usuario un n�mero entero y determine si es par o impar.

import java.util.Scanner;

public class Sumar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese un numero entero: ");
        int numero = scanner.nextInt();

       if(numero%2==0){
            System.out.print("El numero "+ numero + "es par");
       }else{
            System.out.print("El numero "+ numero + "es impar");
       }


        scanner.close();
    }
}
