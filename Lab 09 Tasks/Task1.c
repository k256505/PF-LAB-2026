#include<stdio.h>

float triageScore(int severity, int age, int vitals){
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}

int main(void){
    int severity, age, vitals;
    printf("Enter severity (1-10): ");
    scanf("%d", &severity);
    printf("Enter age risk (1-10): ");
    scanf("%d", &age);
    printf("Enter vitals stability (1-10): ");
    scanf("%d", &vitals);

    float score = triageScore(severity, age, vitals);
    printf("Triage Score: %.2f\n", score);

    (score > 7.0) ? printf("Immediate attention required\n") :
    (score >= 4.0) ? printf("Moderate priority\n") :
    printf("Can wait\n");

    return 0;
}
