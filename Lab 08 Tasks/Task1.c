#include<stdio.h>
int main(void){
    int i,j,total,studentsxsubjects[4][3]={{80,75,90},{60,70,85},{88,92,79},{55,65,70}};
    float avg;
    for(i=0;i<4;i++){
        total=0;
        for(j=0;j<3;j++){
            total+=studentsxsubjects[i][j];
        }
        printf("\nTotal Marks of Student %d is %d/300",i+1,total);
    }
    for(j=0;j<3;j++){
        avg=0;
        for(i=0;i<4;i++){
            avg+=studentsxsubjects[i][j];
        }
        printf("\nAverage of subject %d is %.2f",j+1,avg/4);
    }
    return 0;
}
