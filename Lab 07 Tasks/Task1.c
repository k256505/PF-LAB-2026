#include<stdio.h>
#include<conio.h>
int main(void){
    int i,temp,arr[5]={};
    printf("Enter 5 numbers for sequencing: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
        printf("\033[A\033[32C\033[K");
    }
    for(i=4;i>0;i--){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
