#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char name[50];
    int grade;
 
    fptr = fopen("grades.txt", "w");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    for(int i = 0; i < 3; i++){
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter grade: ");
        scanf("%d", &grade);
        fprintf(fptr, "%s %d\n", name, grade);
    }
    fclose(fptr);
 
    fptr = fopen("grades.txt", "r");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    printf("\n--- grades.txt ---\n");
    while(fscanf(fptr, "%s %d", name, &grade) == 2)
        printf("%s: %d\n", name, grade);
    fclose(fptr);
 
    return 0;
}