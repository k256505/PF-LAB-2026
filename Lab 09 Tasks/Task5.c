#include<stdio.h>

float toMegajoules(float kwh){ return kwh * 3.6; }
float toBTU(float kwh)       { return kwh * 3412.14; }
float toCalories(float kwh)  { return kwh * 859845; }

int main(void){
    float kwh;
    printf("Enter energy reading in kWh: ");
    scanf("%f", &kwh);

    printf("\n===== Conversion Report =====\n");
    printf("Megajoules : %.2f MJ\n", toMegajoules(kwh));
    printf("BTU        : %.2f BTU\n", toBTU(kwh));
    printf("Calories   : %.2f kcal\n", toCalories(kwh));

    // function call chaining directly inside printf
    printf("\n[Chaining] MJ: %.2f\n", toMegajoules(kwh));
    printf("=============================\n");

    return 0;
}
