#include<stdio.h>
#include<stdlib.h>
// (a) calloc zeros out all allocated memory, malloc does not.
//     For sensor buffers, uninitialized malloc memory holds garbage values.
//     If the program reads before writing (e.g., a sensor hasn't responded yet),
//     it would treat garbage as a real temperature, a dangerous bug.
 
// (c) malloc vs calloc comparison (for n = 3 floats):
//     malloc: [garbage] [garbage] [garbage]  <- unpredictable, could be -431602080.00 etc
//     calloc: [0.00]    [0.00]    [0.00]     <- guaranteed zero
int main(void){
    int n;
    printf("Enter number of sensors: ");
    scanf("%d", &n);
    float *buffer = (float *)calloc(n, sizeof(float));
    if(buffer == NULL){ printf("Memory allocation failed.\n"); return 1; }
    printf("\nInitial buffer values (should all be 0.0):\n");
    for(int i = 0; i < n; i++)
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    printf("\nEnter temperature readings:\n");
    for(int i = 0; i < n; i++){
        printf("Sensor %d: ", i + 1);
        scanf("%f", &buffer[i]);
    }
    printf("\nFinal sensor readings:\n");
    for(int i = 0; i < n; i++)
        printf("Sensor %d: %.2f\n", i + 1, buffer[i]);
    free(buffer);
    buffer = NULL;
    return 0;
}
