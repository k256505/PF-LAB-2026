#include<stdio.h>
 
int main(void){
    FILE *fptr;
    int score, sum = 0, val;
 
    fptr = fopen("survey.txt", "w");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    for(int i = 0; i < 5; i++){
        printf("Enter score %d (1-10): ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);
 
    fptr = fopen("survey.txt", "r");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    int count = 0;
    while(fscanf(fptr, "%d", &val) == 1){ sum += val; count++; }
    fclose(fptr);
 
    float avg = (float)sum / count;
    printf("\nSum: %d\nAverage: %.2f\n", sum, avg);
 
    return 0;
}