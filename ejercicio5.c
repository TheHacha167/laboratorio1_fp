/*Ejercicio 5: Suma, resta, división, módulo o multiplicación y según la opción seleccionada se realice la operación solicitando previamente los números al usuario por teclado.*/
#include <stdio.h>

int main() {
    int primer_numero, segundo_numero, resultado;
    char tipo_de_operacion;
    int correcto = 1;

    printf("NO ADMITE DECIMALES\n");//No se admiten decimales puesto que para hacer la operacion de modulo he tenido que usar una variable int en vez de float.
    printf("Para operar con una suma usa: +\n");//Le mostramos al usuario los tipos de operaciones que hay posibles.
    printf("Para operar con una resta usa: -\n");
    printf("Para operar con una multiplicacion usa: x o *\n");//Al usuario le damos dos opciones para multiplicar, debido que podría usar cualquiera de las dos aniadidas y si no estuviera implementado en el cidgo saldria como error.
    printf("Para operar con un modulo usa: M\n");
    printf("Para operar con una division usa: /\n");
    printf("Escribe el tipo de operacion: \n");//Aqui enviamos una linea de texto al usuario para que escriba el tipo de operacion que quiere ejecutar.
    scanf("%c", &tipo_de_operacion);//variable para el tipo de operacion a realizar.
    printf("Primer numero de la operacion: \n");//Una vez escrito el tipo de operacion le pedimos al usuario que ingrese el primer numero para calcular, el cual guardamos en la variable "primero".
    scanf("%f", &primer_numero);//variable para el primer numero seleccionado por el usuario.
    printf("Segundo numero de la operacion: \n");//Este es el segundo valor que se guardara en la variable "segundo", el cual usara automaticamente el codigo junto a "primero" para operar.
    scanf("%f", &segundo_numero);//variable para guardar el segundo numero seleccionado por el usuario.

    switch (tipo_de_operacion) { //Aqui usamos la estructura "switch" para considerar decisiones de varias posibilidades, entre ellas el tipo de operacion que haya elegido el usuario.
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
        case 'M':
            resultado = primer_numero % segundo_numero;
            break;
        case '/':
            resultado = primer_numero / segundo_numero;
            break;
        default:
            correcto = 0;
    }

    if (correcto)//Si el resultado final es posible saltaria en pantalla el comentario en cuestion.
        printf("El resultado final es: %f\n", resultado);
    else//Si el resultado final fuera imposible saltaria al else y mostraria en pantalla el mensaje en cuestion.
        printf("Imposible de calcular.\n");

    return 0;
}