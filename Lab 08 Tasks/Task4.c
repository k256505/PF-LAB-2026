// I MADE THIS PROGRAM WITHOUT USING AI!!!
// I USED POINTERS AND FUNCTIONS BECAUSE I WANTED TO LEARN THEM
#include<stdio.h>
// Transpose Function
void transpose(int *i, int *j, int matrix[3][3]){
    printf("\nTranspose of Matrix:");
    for(*j=0;*j<3;(*j)++){
        printf("\n");
        for(*i=0;*i<3;(*i)++){
            printf(" %d ",matrix[*i][*j]);
        }
    }
}
// Determinant Function
void determinant(int *i, int *j, int *detert, int matrix[3][3]){
    *detert = (matrix[0][0] * ((matrix[1][1]*matrix[2][2])-(matrix[2][1]*matrix[1][2])))-(matrix[0][1] * ((matrix[1][0]*matrix[2][2])-(matrix[2][0]*matrix[1][2])))+(matrix[0][2] * ((matrix[1][0]*matrix[2][1])-(matrix[2][0]*matrix[1][1])));
    printf("\n\nDeterminant of Matrix = %d \n",*detert);
}
// Co-Factor Function
void cofactor(int *i,int *sign,int c1_9[9],int matrix[3][3]){
    (*sign)*=(-1);(c1_9[0])=(*sign) * ((matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2]));
    (*sign)*=(-1);(c1_9[1])=(*sign) * ((matrix[1][0]*matrix[2][2]) - (matrix[2][0]*matrix[1][2]));
    (*sign)*=(-1);(c1_9[2])=(*sign) * ((matrix[1][0]*matrix[2][1]) - (matrix[2][0]*matrix[1][1]));
    (*sign)*=(-1);(c1_9[3])=(*sign) * ((matrix[0][1]*matrix[2][2]) - (matrix[2][1]*matrix[0][2]));
    (*sign)*=(-1);(c1_9[4])=(*sign) * ((matrix[0][0]*matrix[2][2]) - (matrix[2][0]*matrix[0][2]));
    (*sign)*=(-1);(c1_9[5])=(*sign) * ((matrix[0][0]*matrix[2][1]) - (matrix[2][0]*matrix[0][1]));
    (*sign)*=(-1);(c1_9[6])=(*sign) * ((matrix[0][1]*matrix[1][2]) - (matrix[1][1]*matrix[0][2]));
    (*sign)*=(-1);(c1_9[7])=(*sign) * ((matrix[0][0]*matrix[1][2]) - (matrix[1][0]*matrix[0][2]));
    (*sign)*=(-1);(c1_9[8])=(*sign) * ((matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]));
    printf("\nCo-Factors of Matrix:\n");
    for(*i=0;*i<9;(*i)++){
        printf("C%d = %d ",(*i)+1,c1_9[*i]);
    }
}
// Ad-Joint Function
void adjoint(int *i, int *j, int *k,int c1_9[9]){
    printf("\n\nAdjoint of Matrix:\n");
    *j=0;*k=0;
    for(*i=0;*i<3;(*i)++){
        for(;*j<3*(*i+1);(*j)++){
            (c1_9[*k] > -1 && c1_9[*k] < 10)?(printf("  %d ",c1_9[*k])):(printf(" %d ",c1_9[*k]));
            (*k)+=3;
        }
        (*k == 9)?(*k=1,printf("\n")):(*k=2,printf("\n"));
    }
}
// Inverse Function
void inverse(int *i, int *j, int *k,int *detert,int c1_9[9]){
    printf("\nInverse of Matrix:\n");
    if(*detert != 0){
        *j=0;*k=0;
        for(*i=0;*i<3;(*i)++){
            for(;*j<3*(*i+1);(*j)++){
                (c1_9[*k] > -1 && c1_9[*k] < 10)?(printf("  %d/%d ",c1_9[*k],*detert)):(printf(" %d/%d ",c1_9[*k],*detert));
                (*k)+=3;
            }
            (*k == 9)?(*k=1,printf("\n")):(*k=2,printf("\n"));
        }
    }else{
        printf("Since its a singular matrix, the Inverse of the Matrix is 0\n");
    }
}
int main(void){
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,sign=-1,c1_9[9];
    int i,j,k,detert,matrix[3][3];
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("Input element for Row %d and column %d of Matrix: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    transpose(&i,&j,matrix);
    determinant(&i,&j,&detert,matrix);
    cofactor(&i,&sign,c1_9,matrix);
    adjoint(&i,&j,&k,c1_9);
    inverse(&i,&j,&k,&detert,c1_9);
    return 0;
}
