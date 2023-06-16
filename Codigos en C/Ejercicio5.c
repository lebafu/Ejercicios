//5. Ordenamiento de un arreglo: Escribe un programa que ordene un arreglo de n�meros enteros de forma ascendente utilizando el algoritmo de selecci�n.
#include<stdio.h>

int main() {
    // Declaración de variables
    int cantidad,i,aux,j,menor;
    printf("Ingresa cantidad de números a ingresar en el arreglo:\n");
    scanf("%d",&cantidad);
    int arreglo[cantidad];
    for(i=0;i<cantidad;i++){
        printf("Ingrese elemento %d:\n",i+1);
        scanf("%d",&arreglo[i]);
    }


    j=0;
    arreglo[j];
    while(j<cantidad){
        for(i=0;i<cantidad;i++){
            if(arreglo[j]<arreglo[i]){
                aux=arreglo[j];
                arreglo[j]=arreglo[i];
                arreglo[i]=aux;
            }
        }
       j=j+1; 
    }
    
    printf("El arreglo ordenado de menor a mayor es:");
    for(i=0;i<cantidad;i++){
        printf("%d",arreglo[i]);
    }

    return 0;
}