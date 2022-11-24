/*Ejercicio 4: Determina si es un carácter numérico o un carácter alfabético o un espacio, e imprimir por pantalla cada cuenta según el tipo.*/
#include <stdio.h>

int main(){
    char cadena[20]; // aquí se almacena la cadena de caracteres para luego jacer el print
    printf("Escribe un texto:\n"); // el mensaje para saber que hace el que interactua
    scanf("%s", cadena); // almacenamos la entrada en la cadena de caracteres 
    printf("El texto es: %s", cadena); //hacemos la calida
}
