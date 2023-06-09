#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_MOMENTOS_DIA 12

void generartemp(float *temperaturas) {
	int i;
    srand(time(NULL));
    for ( i = 0; i < NUM_MOMENTOS_DIA; i++) {
        temperaturas[i] = 35.0 + (float)(rand()) / RAND_MAX * (40.0 - 35.0);
    }
}

void checartemperaturas(const float *temperaturas) {
	int i;
    printf("Análisis de temperaturas:\n");
    for (i = 0; i < NUM_MOMENTOS_DIA; i++) {
        printf("Momento %d: %.2f grados\n", i + 1, temperaturas[i]);
    }
}

void verificar(const float *temperaturas) {
	
	int i;
    for ( i = 0; i < NUM_MOMENTOS_DIA; i++) {
        if (temperaturas[i] > 37.0) {
            printf("FIEBRE detectada en el momento %d\n", i + 1);
        }
    }
}

int main() {
    float temperaturas[NUM_MOMENTOS_DIA];
    generartemp(temperaturas);
    checartemperaturas(temperaturas);
    verificar(temperaturas);

    return 0;
}
