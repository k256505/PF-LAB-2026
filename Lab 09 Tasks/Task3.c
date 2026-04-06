#include<stdio.h>

int totalRuns(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int highestScore(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

int aboveAverage(int arr[], int n, float avg){
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] > avg) count++;
    return count;
}

int main(void){
    int scores[10];
    printf("Enter scores for 10 matches:\n");
    for(int i = 0; i < 10; i++){
        printf("Match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int total = totalRuns(scores, 10);
    float avg = (float)total / 10;
    int highest = highestScore(scores, 10);
    int above = aboveAverage(scores, 10, avg);

    printf("\n===== Performance Report =====\n");
    printf("Total Runs     : %d\n", total);
    printf("Average        : %.2f\n", avg);
    printf("Highest Score  : %d\n", highest);
    printf("Above Average  : %d matches\n", above);
    printf("==============================\n");

    return 0;
}
