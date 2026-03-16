#include<stdio.h>
int main(void){
    int i,j,k,temp,count,am[3][3],bm[3][3];
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("Input element for Row %d and column %d of Matrix 1: ",i+1,j+1);
            scanf("%d",&am[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("Input element for Row %d and column %d of Matrix 2: ",i+1,j+1);
            scanf("%d",&bm[i][j]);
        }
    }
    printf("\n\nYour First Matrix: ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf(" %d ",am[i][j]);
        }
    }
    printf("\n\nYour Second Matrix: ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf(" %d ",bm[i][j]);
        }
    }
    printf("\n\nYour Multiplication Output: ");
    for(i=0;i<3;i++){;
        printf("\n");
        for(j=0;j<3;j++){
            temp=0;
            for(k=0;k<3;k++){
                temp+=(am[i][k]*bm[k][j]);
            }
            printf(" %d ",temp);
        }
    }
}
