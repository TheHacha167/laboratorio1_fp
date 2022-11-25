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
    float primero, segundo, respuesta;
    char op;
    int valido = 1;

    printf("Escribe el tipo de operacion: ");
    scanf("%c", &op);
    printf("Primer numero de la operacion: ");
    scanf("%f", &primero);
    printf("Segundo numero de la operacion: ");
    scanf("%f", &segundo);

    switch (op) {
        case '+':
            respuesta = primero + segundo;
            break;
        case '-':
            respuesta = primero - segundo;
            break;
        case '*':
        case 'x':
            respuesta = primero * segundo;
            break;
        case '/':
            respuesta = primero / segundo;
            break;
        default:
            valido = 0;
    }

    if (valido)
        printf("El resultado final es: %f\n", respuesta);
    else
        printf("Imposible de calcular.\n");

    return 0;
}