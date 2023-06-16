//3. C�lculo del �rea de un tri�ngulo: Implementa un programa que solicite al usuario la base y la altura de un tri�ngulo y calcule su �rea.

import java.util.Scanner;

public class Area_Triangulo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese la altura del triangulo: ");
        int altura= scanner.nextInt();

        System.out.print("Ingrese la base del triangulo: ");
        int base = scanner.nextInt();

        int area = area_Triangulo(altura, base);

        System.out.println("El triagulo de altura " + altura + " y base " + base + " posee una area de " + area);

        scanner.close();
    }

    public static int area_Triangulo(int area, int base) {
        return (area*base)/2;
    }
}
