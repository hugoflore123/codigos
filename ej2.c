#include <stdio.h>

void main()

 

{
char cadena[20];
int longitud();
printf ("\nDame una cadena (maximo 20): ");
gets(cadena);
printf ("\nLa cadena %s mide %d ", cadena, longitud(cadena));
}

 

 

int longitud(char *s){
int l;
l = 0;
while (*s++ != '\0') l++;
return l;
} 
