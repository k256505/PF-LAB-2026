#include<stdio.h>
int main(void){
    float avg;
    int i,j=0,max,record[7][3]={{12,22,18},{14,25,20},{16,21,15},{8,12,5},{2,7,1},{0,10,6},{5,15,12}}; //In Celsius
    for(i=0;i<7;i++){
        avg=0;
        for(;j<3*(i+1);j++){
            avg+=record[i][j/(i+1)];
            (j == 0)?(max=record[i][j/(i+1)]):(record[i][j/(i+1)] > max)?(max = record[i][j/(i+1)]):(i=i);
        }
        printf("The average temperature for day %d is %.2f Celsius\n",i+1,avg/3);
    }
    printf("\nThe highest temperature recorded in the week is %d",max);
    return 0;
}
