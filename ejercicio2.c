/*Ejercicio 2: El programa pedirá al usuario el valor del primer número a partir del cual 
comenzará la impresión; y pedirá también cuántos úmeros ha de imprimir.*/
#include  <stdio.h>

int main ()
{
    
 
    int numero1;
    int numero2;
    
    printf("Da un numero para el valor a comenzar \n");
    scanf("%d",numero1); 
    printf("Da un numero para el numero de impresiones\n");
    scanf("%d",numero2); 
    printf(numero1);
 
    printf(numero2);

    /*

   int array[a];
   for (int i = 0; i < a; ++i)
   {
      array[i] = i + 1;
   }
   for (int i = 0; i < a; ++i)
   {
      printf("%d, ", i + 1);
   }
   return array;



*/
   return 0;
}
