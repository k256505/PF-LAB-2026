#include<stdio.h>
float score(int x, int y, int z){
    float result = (x*0.5)+(y*0.3)+(z*0.2);
    return result;
}
int main(void){
    float severity, age, vitals;
    printf("Severity of injury (1 - 10) = ");
    scanf("%f",&severity);
    printf("Age risk factor (1 - 10) = ");
    scanf("%f",&age);
    printf("Vital Stability (1 - 10) = ");
    scanf("%f",&vitals);
    score(severity,age,vitals);
        (score(severity,age,vitals) > 7)?(printf("\nImmediate attention required!")):(score(severity,age,vitals) >= 4)?(printf("\nModerate Priority")):(printf("\nCan Wait"));
        return 0;
}
