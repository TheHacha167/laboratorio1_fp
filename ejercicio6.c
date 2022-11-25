/*Ejercicio 6: Obtener el MCD de dos números positivos cualesquieras*/
#include <stdio.h>

int n1, n2, i, mcd;

int main()
{
    printf("Introducir el primer numero: ");
    scanf("%d", &n1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            mcd = i;
    }

    printf("El maximo comun divisor de %d y %d es %d", n1, n2, mcd);

    return 0;
}