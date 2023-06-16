//6. C�lculo del factorial: Crea un programa que solicite al usuario un n�mero entero y calcule su factorial utilizando una funci�n recursiva.
import java.util.Scanner;

public class Sumar {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese numero: ");
        int numero = scanner.nextInt();

        resultado=factorial(numero);
        System.out.println("El factorial del número "+ numero + " es:" + resultado);

        scanner.close();
    }

    public static int factorial(int n) {
            if(n==0){
                return 1;
            }else{
                return n*factorial(n-1);
            }
        }
}