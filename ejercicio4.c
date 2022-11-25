/*Ejercicio 4: Determina si es un caracter numerico o un caracter alfabetico o un espacio, e imprimir por pantalla cada cuenta segun el tipo.*/
#include <stdio.h>

/*No se admiten caracteres especiales ni letras con tildes.*/

    char s[1000]; //numero maximo de la entrada
    int i,letras=0,numeros=0,espacio=0; 
    
int main()
{
    printf("Introduce la cadena: ");
    gets(s);
     
    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )//hacemos un filtro por caracteres asci para saber si alguno se encuentra y sumar  1 a un contador
            letras++;
        else 
            if(s[i]>=48 && s[i]<=57)
            numeros++;
        else
            if((s[i]=32))
            espacio++;
    //el bucle if para revisar si los caracteres se encuentran y aumentar el contador correspondiente
}   //uso un bucle for para que hasta que no se revise todo no se detenga el bucle

 	
     
printf("letras = %i\n",letras);
printf("Numeros = %i\n",numeros);
printf("Espacios = %i\n", espacio);


return 0;
}