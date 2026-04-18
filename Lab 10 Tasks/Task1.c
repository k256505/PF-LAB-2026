#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
    char name[100];
    int error = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s",name);
    for(int i = 0;i < strlen(name);i++){
        (isdigit(name[i]))?(error = 1):(i=i);
    }
    if(strlen(name) < 4 || strlen(name) > 19){
        printf("\nTHe name is Invalid!");
    }else if(name[0] == ' ' || name[strlen(name)-1] == ' '){
        printf("\nThe name is Invalid!");
    }else if(error){
        printf("\nThe name is Invalid!");
    }else{
        printf("\nThe name is Valid!");
    }
    return 0;
}