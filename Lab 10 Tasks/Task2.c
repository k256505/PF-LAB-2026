#include<stdio.h>
#include<string.h>
 
int main(void){
    char stored[] = "Secure@123";
    char input[50];
 
    for(int i = 0; i < 3; i++){
        printf("Enter password (attempt %d): ", i + 1);
        scanf("%s", input);
 
        if(strlen(input) == 0){ printf("Empty input!\n"); continue; }
 
        if(strcmp(stored, input) == 0){
            printf("Access granted!\n");
            return 0;
        }
 
        if(i >= 1){
            if(strncmp(stored, input, 3) == 0)
                printf("Hint: First 3 characters match.\n");
            else
                printf("Hint: First 3 characters do not match.\n");
        }
 
        int cmp = strcmp(input, stored);
        (cmp < 0) ? printf("Input is alphabetically before the password.\n") :
                    printf("Input is alphabetically after the password.\n");
    }
 
    printf("Account locked. Too many failed attempts.\n");
    return 0;
}
