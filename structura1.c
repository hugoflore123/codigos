#include <stdio.h>
#include <stdlib.h>

struct Persona {
    char nombre[20];
    int edad;
};

void modificarPersona(struct Persona *pPersona) {
    printf("Ingrese el nombre: ");
    scanf("%s", pPersona->nombre);
}

int main() {
    struct Persona personal;
    strcpy(personal.nombre, "Juan Lopez");
    personal.edad = 30;

    modificarPersona(&personal);

    printf("Nombre: %s\n", personal.nombre);
    printf("Edad: %d\n", personal.edad);

    return 0;
}

