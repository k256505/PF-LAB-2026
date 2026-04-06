#include<stdio.h>

float totalRevenue(float bills[], int n){
    float sum = 0;
    for(int i = 0; i < n; i++) sum += bills[i];
    return sum;
}

int bestTable(float bills[], int n){
    int maxIdx = 0;
    for(int i = 1; i < n; i++)
        if(bills[i] > bills[maxIdx]) maxIdx = i;
    return maxIdx;
}

int isProfitable(float total){
    return (total > 10000) ? 1 : 0;
}

int main(void){
    float bills[5];
    printf("Enter bills for 5 tables:\n");
    for(int i = 0; i < 5; i++){
        printf("Table %d: ", i + 1);
        scanf("%f", &bills[i]);
    }

    float total = totalRevenue(bills, 5);
    int best = bestTable(bills, 5);

    printf("\n===== Closing Summary =====\n");
    printf("Total Revenue : Rs. %.2f\n", total);
    printf("Best Table    : Table %d\n", best + 1);
    printf("Profitable    : %s\n", isProfitable(total) ? "Yes" : "No");
    printf("===========================\n");

    return 0;
}
