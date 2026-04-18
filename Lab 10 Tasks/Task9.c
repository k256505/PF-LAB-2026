#include<stdio.h>
 
int main(void){
    FILE *fptr = fopen("config.txt", "r");
 
    if(fptr == NULL){
        printf("config.txt not found. Creating default config...\n");
        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "debug_mode=0\n");
        fclose(fptr);
        printf("Default config.txt created.\n");
    } else {
        printf("config.txt found. Reading settings:\n");
        char line[100];
        while(fgets(line, 100, fptr)) printf("%s", line);
        fclose(fptr);
    }
 
    return 0;
}