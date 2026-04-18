#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
 
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter 3 subject scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);
 
    float avg = (float)(s1 + s2 + s3) / 3;
    char *status = (avg >= 50) ? "Pass" : "Fail";
 
    fptr = fopen("report.txt", "w+");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    fprintf(fptr, "======= Report Card =======\n");
    fprintf(fptr, "Name    : %s\n", name);
    fprintf(fptr, "Score 1 : %d\n", s1);
    fprintf(fptr, "Score 2 : %d\n", s2);
    fprintf(fptr, "Score 3 : %d\n", s3);
    fprintf(fptr, "Average : %.2f\n", avg);
    fprintf(fptr, "Status  : %s\n", status);
    fprintf(fptr, "===========================\n");
 
    rewind(fptr);
 
    printf("\n");
    char line[100];
    while(fgets(line, 100, fptr)) printf("%s", line);
    fclose(fptr);
 
    return 0;
}