#include<stdio.h>
int main(void){
    int i;
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]",input);
    for(i=0;i<100;i++){
        if(input[i] >= 97 && input[i] <= 122){
            input[i]-=32;
        }else if(input[i] >= 65 && input[i] <= 90){
            input[i]+=32;
        }
    }
        printf("Output: %s",input);
}
