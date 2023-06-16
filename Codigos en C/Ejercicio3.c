//3. C�lculo del �rea de un tri�ngulo: Implementa un programa que solicite al usuario la base y la altura de un tri�ngulo y calcule su �rea.
#include<stdio.h>


float area_triangulo(float altura,float base){
    float area;
    area=(altura*base)/2;
    return area;
}
int main() {
    // Declaración de variables
    float a,b,area;
    //Codigo
    printf("Ingresa altura del triángulo:\n");
    scanf("%f",&a);
    printf("Ingresa la longitud de la base del triángulo:\n");
    scanf("%f",&b);
    area=area_triangulo(a,b);
    printf("La area del triangulo de altura %f, base %f es:%f",a,b,area);
    return 0;
}