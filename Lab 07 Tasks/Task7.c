#include<stdio.h>
int main(void){
    int i,j,input,num[10];
    printf("Enter 10 integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
        printf("\033[1A\033[19C\033[J");
    }
    printf("\nInput = ");
    for(i=0;i<10;i++){
        printf(" %d ",num[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(num[i] == num[j]){
                num[j] = -1;
            }
        }
    }
    printf("\nOutput = ");
    for(i=0;i<10;i++){
        printf(" %d ",num[i]);
    }
}
