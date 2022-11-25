/*Ejercicio 5: Suma, resta, división, módulo o multiplicación y según la opción seleccionada se realice la operación solicitando previamente los números al usuario por teclado.*/
#include <stdio.h>

float potencia(float base, int exponente) {
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}


int main() {
    int primer_numero, segundo_numero, resultado;
    char tipo_de_operacion;
    int correcto = 1;

    printf("NO ADMITE DECIMALES");//No se admiten decimales puesto que para hacer la operacion de modulo he tenido que usar una variable int en vez de float.
    printf("Para operar con una suma usa: +");//Le mostramos al usuario los tipos de operaciones que hay posibles.
    printf("Para operar con una resta usa: -");//Esta linea de explicación la usamos para la resta
    printf("Para operar con una multiplicación usa: x o *");//Al usuario le damos dos opciones para multiplicar, debido que podría usar cualquiera y si solo tenemos una 
    printf("Para operar con un modulo usa: Modulo");
    printf("Para operar con una division usa: /");
    printf("Escribe el tipo de operacion: ");//Aqui enviamos una linea de texto al usuario para que escriba el tipo de operacion que quiere ejecutar.
    scanf("%c", &tipo_de_operacion);//variable "resultado"
    printf("Primer numero de la operacion: ");//Una vez escrito el tipo de operacion le pedimos al usuario que ingrese el primer numero para calcular, el cual guardamos en la variable "primero".
    scanf("%f", &primer_numero);//variable "primero"
    printf("Segundo numero de la operacion: ");//Este es el segundo valor que se guardara en la variable "segundo", el cual usara automaticamente el codigo junto a "primero" para operar.
    scanf("%f", &segundo_numero);//variable "segudno"

    switch (tipo_de_operacion) {
        case '+':
            resultado = primer_numero + segundo_numero;
            break;
        case '-':
            resultado = primer_numero - segundo_numero;
            break;
        case '*':
        case 'x':
            resultado = primer_numero * segundo_numero;
            break;
        case 'Modulo':
            resultado = primer_numero % segundo_numero;
            break;
        case '/':
            resultado = primer_numero / segundo_numero;
            break;
        default:
            correcto = 0;
    }

    if (correcto)
        printf("El resultado final es: %f\n", resultado);
    else
        printf("Imposible de calcular.\n");

    return 0;
}