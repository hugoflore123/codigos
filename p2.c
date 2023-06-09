#include <stdio.h>
#include <string.h>

// Definición de la estructura Persona
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // Creo un array de estructuras Persona llamado personal
    int i;
    struct Persona personal[5];

    // Modificar los elementos del array de estructuras
    strcpy(personal[0].nombre, "Pedro");
    personal[0].edad = 20;
    personal[0].altura = 1.70;

    // Imprimir los datos de las personas
    for (i = 0; i < 5; i++) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        scanf("%s", personal[i].nombre);
        printf("Ingrese la edad de la persona %d: ", i + 1);
        scanf("%d", &personal[i].edad);
    }

    // Imprimir los datos ingresados
    for (i = 0; i < 5; i++) {
        printf("Nombre de la persona %d: %s\n", i + 1, personal[i].nombre);
        printf("Edad de la persona %d: %d\n", i + 1, personal[i].edad);
    }

    return 0;
}

