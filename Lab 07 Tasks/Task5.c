#include<stdio.h>
int main(void){
    int i,a=0,b;
    int nums[10];
    printf("Input 10 Integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&nums[i]);
        if(i == 0){b=nums[i];}
        printf("\033[1A\033[19C\033[J");
        (nums[i] > a)?(a = nums[i]):(nums[i] < b)?(b = nums[i]):(i=i);
    }
    printf("\nLargest = %d\nSmallest = %d\nDifference (max-min) = %d",a,b,a-b);
}
