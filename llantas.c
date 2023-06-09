#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_NEUMATICOS 4


void leerPresionNeumaticos(int* arregloPresiones) {
    int i;
    srand(time(NULL)); 

    for (i = 0; i < NUM_NEUMATICOS; i++) {
        arregloPresiones[i] = rand() % 50 + 20; 
    }
}

void evaluarPresion(int* arregloPresiones) {
    int i;
    char tipoAuto;
    int presionRecomendadaMin, presionRecomendadaMax;
    int fueraDeRango = 0;
    int fallaLlanta = 0;

    printf("Ingrese el tipo de auto: a - chico, b - mediano, c - grande: ");
    scanf(" %c", &tipoAuto);

    switch (tipoAuto) {
        case 'a':
            presionRecomendadaMin = 30;
            presionRecomendadaMax = 35;
            break;
        case 'b':
            presionRecomendadaMin = 32;
            presionRecomendadaMax = 35;
            break;
        case 'c':
            presionRecomendadaMin = 35;
            presionRecomendadaMax = 45;
            break;
        default:
            printf("Tipo de auto no valido.\n");
            return;
    }

    for (i = 0; i < NUM_NEUMATICOS; i++) {
        if (arregloPresiones[i] < presionRecomendadaMin || arregloPresiones[i] > presionRecomendadaMax) {
            fueraDeRango = 1;
            if (arregloPresiones[i] < presionRecomendadaMin) {
                printf("Neumatico %d por debajo del rango recomendado: %d PSI\n", i + 1, arregloPresiones[i]);
            } else {
                printf("Neumatico %d por encima del rango recomendado: %d PSI\n", i + 1, arregloPresiones[i]);
            }
        }
        if (arregloPresiones[i] < 20 || arregloPresiones[i] > 70) {
            fallaLlanta = 1;
        }
    }

    if (fueraDeRango) {
        printf("Al menos un neumatico esta fuera del rango recomendado.\n");
    }
    if (fallaLlanta) {
        printf("¡Advertencia! Se ha detectado una llanta con presion fuera del rango permitido.\n");
    }
}


void imprimirEstadoNeumaticos(int* arregloPresiones) {
    int i;

    printf("Estado de los neumaticos:\n");
    for (i = 0; i < NUM_NEUMATICOS; i++) {
        printf("Neumatico %d: %d PSI\n", i + 1, arregloPresiones[i]);
    }
}


void mostrarMenu() {
    printf("------ Menu ------\n");
    printf("1. Leer presion de neumaticos\n");
    printf("2. Evaluar presion de neumaticos\n");
    printf("3. Imprimir estado de neumaticos\n");
    printf("4. Salir\n");
}

int main() {
    int opcion;
    int presionesNeumaticos[NUM_NEUMATICOS];
    int i;

    while (1) {
        mostrarMenu();
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leerPresionNeumaticos(presionesNeumaticos);
                printf("Presiones de los neumaticos leidas.\n");
                break;
            case 2:
                evaluarPresion(presionesNeumaticos);
                break;
            case 3:
                imprimirEstadoNeumaticos(presionesNeumaticos);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                return 0;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;
        }
    }

    return 0;
}

