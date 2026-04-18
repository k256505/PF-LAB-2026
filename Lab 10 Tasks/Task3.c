#include<stdio.h>
#include<string.h>
 
int main(void){
    char email[100], copy[100], label[120];
 
    printf("Enter email: ");
    scanf("%s", email);
 
    strcpy(copy, email);
 
    char *at = strchr(copy, '@');
    if(at == NULL){ printf("Error: No @ found.\n"); return 1; }
 
    char *domain = at + 1;
    printf("Domain: %s\n", domain);
 
    if(strstr(domain, ".") == NULL)
        printf("Warning: Domain has no '.' separator.\n");
 
    strcpy(label, "Email: ");
    strcat(label, copy);
    printf("%s\n", label);
 
    return 0;
}