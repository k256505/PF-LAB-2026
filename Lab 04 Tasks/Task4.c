#include<stdio.h>
#include<string.h>
int main(){
    char admin[10];
    int pin;
    printf("Enter username: ");
    fgets(admin,sizeof(admin),stdin);
    printf("Enter Pin (5 Digits): ");
    scanf("%d", &pin);
    if(pin == 12345 && strcmp(admin,"user\n") == 0){
        printf("\nConnected Successfully");
    }else{
        printf("\nConnection Failed");
    }
    return 0;
}
