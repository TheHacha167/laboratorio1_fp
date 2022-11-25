/*Ejercicio 3: 


*/
#include  <stdio.h>
 

int n1=5;//primer elemento
int n2=4;//numero de elementos 
int n3=7;//razon
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
      
n4 = n1;

for ( int i = 1; i < n2; ++i)
{
  
   n5 = n4 + n3;
   n6 = n6 + n5;
   n4 = n5;
   n5 = 0;
  


printf("%i \n", n4);
printf("%i \n", n5);
printf("%i \n", n6);
}

printf("%i \n", n6+n1);
   return 0;
}
