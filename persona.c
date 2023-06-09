#include <stdio.h>
#include <string.h>

//Definicion de la estructura person//
struct Persona {
    char nombre [50];
    int edad;
    float altura;
};

int main ()
{
	
    struct Persona personal;
    strcpy(personal.nombre, "Pedro");
    personal.edad=20;
    personal.altura=1.70;

    printf("Nombre: %s\n", personal.nombre);
    printf("Edad: %d\n", personal.edad);
    printf("Altura: %.2f\n", personal.altura );

    return 0;
}
