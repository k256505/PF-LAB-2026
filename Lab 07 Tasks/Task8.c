#include<stdio.h>
int main(void){
    char input[100];
    printf("Enter the characters: ");
    scanf("%[^A-Za-z]",&input);
    printf("\nOutput = %s",input);
}
