#include<stdio.h>
 
int main(void){
    FILE *fptr;
    char product[50];
    int qty;
 
    fptr = fopen("inventory.txt", "a");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    printf("Enter product name: ");
    scanf("%s", product);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    fprintf(fptr, "%s %d\n", product, qty);
    fclose(fptr);
 
    fptr = fopen("inventory.txt", "r");
    if(fptr == NULL){ printf("Error opening file.\n"); return 1; }
 
    printf("\n--- inventory.txt ---\n");
    while(fscanf(fptr, "%s %d", product, &qty) == 2)
        printf("%s: %d\n", product, qty);
    fclose(fptr);
 
    return 0;
}