/*Ejercicio 2: El programa pedira al usuario el valor del primer numero a partir del cual 
comenzara la impresion; y pedira tambien cuantos numeros ha de imprimir.*/
#include  <stdio.h>
 
/*
int numero1=10;//numero por el que se empieza
int numero2=5;//numero de repeticiones
*/ 

int numero1=0;//numero por el que se empieza
int numero2=0;//numero de repeticiones
int numero3=0;//para el cuadrado

int main ()
{
    
    printf("Da un numero para el valor a comenzar \n");
      scanf("%i",& numero1); 

    printf("Da un numero para el numero de impresiones\n");
      scanf("%i", & numero2); 



      for ( int j = 0; j < numero2; ++j)
      { 
         numero3 = numero1 * numero1; 
         printf("%i     %i     \n",numero1,numero3);
         numero1 = numero1 +1 ;



      }
   //uso un bucle for para que hasta que no se cumpla el numero de repeticiones pedidas no se pare y termine el programa
   return 0;
}
