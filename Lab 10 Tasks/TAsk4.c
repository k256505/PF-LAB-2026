#include<stdio.h>
#include<string.h>
 
int main(void){
    char names[5][30];
 
    printf("Enter 5 student names:\n");
    for(int i = 0; i < 5; i++){
        printf("Student %d: ", i + 1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
 
    printf("\nRoll Call:\n");
    for(int i = 0; i < 5; i++) printf("%d. %s\n", i + 1, names[i]);
 
    char search[30];
    printf("\nEnter name to search: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = '\0';
 
    int found = 0;
    for(int i = 0; i < 5; i++){
        if(strcmp(names[i], search) == 0){
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found\n");
 
    return 0;
}