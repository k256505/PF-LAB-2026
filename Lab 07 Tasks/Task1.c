#include<stdio.h>
int main(void){
    int i,temp,arr[5]={};
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=4;i>0;i--){
        temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
