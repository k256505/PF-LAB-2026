#include<stdio.h>
int main(void){
    int i,temp,arr[]={1,2,3,4,5};
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
