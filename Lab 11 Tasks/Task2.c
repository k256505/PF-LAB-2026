#include<stdio.h>
 
int countUpper(char *str){
    if(str[0] == '\0') return 0;
    return (str[0] >= 'A' && str[0] <= 'Z') + countUpper(str + 1);
}
 
int countDigits(char *str){
    if(str[0] == '\0') return 0;
    return (str[0] >= '0' && str[0] <= '9') + countDigits(str + 1);
}
 
int main(void){
    char pass[100];
    printf("Enter password: ");
    scanf("%s", pass);
    printf("Uppercase letters: %d\n", countUpper(pass));
    printf("Digits: %d\n", countDigits(pass));
    return 0;
}