#include <stdio.h>
#include <stdlib.h>
#define MAX_SENSORES 5

// Definición de estructura para el sensor de freno
struct SensorFreno {
    int id;
    float presion;
    char ubicacion[20];
};

void initializeSensores(struct SensorFreno sensores[]) {
    int i;

    for (i = 0; i < MAX_SENSORES; i++) {
        sensores[i].id = i + 1;
        sensores[i].presion = 0.0;
        strcpy(sensores[i].ubicacion, "");
    }
}

int main() {
    struct SensorFreno sensores[MAX_SENSORES];
    int i;

    initializeSensores(sensores);

    printf("Sensores de freno inicializados:\n");
    for (i = 0; i < MAX_SENSORES; i++) {
        printf("Sensor %d:\n", sensores[i].id);
        printf("Presion: %.2f\n", sensores[i].presion);
        printf("Ubicacion: %s\n", sensores[i].ubicacion);
        printf("\n");
    }

    return 0;
}

