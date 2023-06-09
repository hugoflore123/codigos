#include <stdlib.h>
#include <time.h>

#define NUM_NEUMATICOS 4


void leerPresionNeumaticos (int* arregloPresiones){
    int i;
    srand(time(NULL)); 
    for (i=0; i<NUM_NEUMATICOS; i++)
    {
        arregloPresiones [i] = rand() % 50+20; 
    } 
} 

int main ()
{
int presionesNeumaticos[NUM_NEUMATICOS];
int i;
leerPresionNeumaticos (presionesNeumaticos);
printf ("PRESIONES DE LOS NEUMATICOS");
for (i = 0; i < NUM_NEUMATICOS; i++)
{
    printf("Neumático %d: %d PSI\n",i+1,presionesNeumaticos[i]);
}
return 0;
}
