#include<stdio.h>

int main(void){
    int arr[6] = {45, 60, 38, 55, 50, 42};
    int *p = arr;

    printf("Before scaling: ");
    for(int i = 0; i < 6; i++) printf("%d ", *(p + i));
    printf("\n");

    // find highest
    int highest = *(p + 0);
    for(int i = 1; i < 6; i++)
        if(*(p + i) > highest) highest = *(p + i);

    // scale in-place
    for(int i = 0; i < 6; i++)
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);

    printf("After scaling:  ");
    for(int i = 0; i < 6; i++) printf("%d ", *(p + i));
    printf("\n");

    return 0;
}
