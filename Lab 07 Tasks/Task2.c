#include<stdio.h>
int main(void){
    int i,num,error,rep=0,arr[10];
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nEnter a number to search: ");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(num == arr[i]){
            rep+=1;
        }else if(i == 9){
            error = 1;
        }
    }
    if(error == 1){
        printf("\nNumber not found!");
    }else{
        printf("\nThis number is repeated %d times!",rep);
    }
}
