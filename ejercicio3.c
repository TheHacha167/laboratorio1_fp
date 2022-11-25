/*Ejercicio 3: 


*/
#include  <stdio.h>
 

int n1=0;//primer elemento
int n2=0;//numero de elementos 
int n3=0;//razon
int n4=0;//variable almacenar 
int n5=0;//variable almacenar 
int n6=0;//variable almacenar 

int main ()
{
   
    printf("Da un numero para el primer elemento \n");
      scanf("%i",& n1); 

    printf("Da un numero para el numero de elementos\n");
      scanf("%i", & n2); 

   printf("Da un numero para la razon\n");
      scanf("%i", & n3); 
      
n4 = n1;// establecemos el primer valor de la variable para no necesitar un ciclo mas

for ( int i = 1; i < n2; ++i)
{
  
   n5 = n4 + n3;// la suma basica
   n6 = n6 + n5;// almacenamos el resultado y lo sumamos al anterior para la progresion
   n4 = n5;// guardamos el valor para hacer la suma
   n5 = 0;//restablecer la variable para no arrastrar fallos de calculo
  
}

printf("%i \n", n6+n1);//salida
   return 0;
}
