/*Ejercicio 1: Imprimir texto escrito por teclado*/
#include <stdio.h>

 char cadena[20]; // aquí se almacena la cadena de caracteres para luego hacer el print
 
int main(){
    
    printf("Escribe un texto:\n");// el mensaje para saber que hace el que interactua
    scanf("%s", cadena); // almacenamos la entrada en la cadena de caracteres 
    printf("El texto es: %s", cadena);//hacemos la calida
}
