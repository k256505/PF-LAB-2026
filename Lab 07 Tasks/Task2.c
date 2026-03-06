#include<stdio.h>
int main(void){
    int i,num,error=0,rep=-1,arr[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        printf("\033[1A\033[18C\033[J");
    }
    printf("\nEnter a number to search: ");
    scanf("%d",&num);
    for(i=0;i<10;i++){
    (num == arr[i])?(rep+=1):(error+=1);
    }
    if(error == 10){
        printf("\nNumber not found!");
    }else{
        printf("\nThis number is repeated %d times!",rep);
    }
}
