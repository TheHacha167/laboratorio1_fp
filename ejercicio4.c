/*Ejercicio 4: Determina si es un carácter numérico o un carácter alfabético o un espacio, e imprimir por pantalla cada cuenta según el tipo.*/
#include <stdio.h>
#include <string.h>

    char s[1000]; 
    int i,letras=0,numeros=0,espacio=0; 
    
int main()
{
    printf("Introduce la cadena: ");
    gets(s);
     
    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
            letras++;
        else 
            if(s[i]>=48 && s[i]<=57)
            numeros++;
        else
            if((s[i]=32))
            espacio++;

}
 	
     
printf("letras = %c\n",letras);
printf("Numeros = %c\n",numeros);
printf("Espacios = %c\n", espacio);


return 0;
}