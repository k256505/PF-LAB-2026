#include<stdio.h>

int main(void){
    int vibrations = 847;
    float temperature = 73.6;
    char status = 'W';

    void *sensor;

    sensor = &vibrations;
    printf("Vibrations: %d | Address: %p\n", *(int *)sensor, (void *)sensor);

    sensor = &temperature;
    printf("Temperature: %.1f | Address: %p\n", *(float *)sensor, (void *)sensor);

    sensor = &status;
    printf("Status: %c | Address: %p\n", *(char *)sensor, (void *)sensor);

    if(*(char *)sensor == 'N')      printf("Alert: All systems normal.\n");
    else if(*(char *)sensor == 'W') printf("Alert: Warning! Check the system.\n");
    else if(*(char *)sensor == 'C') printf("Alert: CRITICAL! Immediate action required.\n");

    return 0;
}
