#include<stdio.h>
int main(void){
    int i,j,input,slot,firstdiag,rows,cols;
    int row_m=1,col_m=1,sqr_m=1,rec_m=1,null_m=1,diag_m=1,scar_m=1,ident_m=1,upr_m=1,lwr_m=1,sym_m=1,sksym_m=1,detert,sing_m=1,nsing_m=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    for(i=0;i<rows;i++){
        printf("\n");
        for(j=0;j<cols;j++){
            printf("Enter an integer for Row %d Column %d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nYour Matrix:\n");
    for(i=0;i<rows;i++){
        printf("\n");
        for(j=0;j<cols;j++){
            printf(" %d ",matrix[i][j]);
        }
    }
    if(rows == 2 && cols == 2){detert = (matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]);
    }else if(rows == 3 && cols == 3){detert = (matrix[0][0] * ((matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2])))
                                            - (matrix[0][1] * ((matrix[1][0]*matrix[2][2]) - (matrix[2][0]*matrix[1][2])))
                                            + (matrix[0][2] * ((matrix[1][0]*matrix[2][1]) - (matrix[2][0]*matrix[1][1])));
    }else if(rows == 1 && cols == 1){detert = matrix[0][0];
    }else if(matrix[0][0] % 2 == 0){detert = 2*matrix[1][1];
    }else{detert = 0;}
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            firstdiag=matrix[1][1];
            slot=matrix[i][j];
            (rows != 1)?(row_m = 0):(i=i);
            (cols != 1)?(col_m = 0):(i=i);
            (rows == cols)?(rec_m = 0):(i=i);
            (slot != 0)?(null_m = 0):(i=i);
            (rows != cols)?(sqr_m = 0):(i=i);
            if(sqr_m){
                (matrix[i][j] != 0 && i != j)?(diag_m = 0):(i=i);
                (matrix[i][i] != firstdiag)?(scar_m = 0):(i=i);
                (matrix[i][j] != 0 && i != j || matrix[i][i] != 1)?(ident_m = 0):(i=i);
                (matrix[i][j] != 0 && i>j)?(upr_m = 0):(i=i);
                (matrix[i][j] != 0 && i<j)?(lwr_m = 0):(i=i);
                (matrix[i][j] != matrix[j][i])?(sym_m = 0):(i=i);
                (matrix[i][j] != -matrix[j][i])?(sksym_m = 0):(i=i);
                (detert == 0)?(nsing_m = 0):(sing_m = 0);
            }else{
                sqr_m = diag_m = scar_m = ident_m = upr_m = lwr_m = sym_m = sksym_m = sing_m = nsing_m = 0;
            }
        }
    }
    printf("\n");
    if(row_m){printf("\nThis is a Row Matrix");}
    if(col_m){printf("\nThis is a Column Matrix");}
    if(null_m){printf("\nThis is a Null/Zero Matrix");}
    if(rec_m){printf("\nThis is a Rectangular Matrix");}
    if(sqr_m){printf("\nThis is a Square Matrix");}
    if(diag_m){printf("\nThis is a Diagonal Matrix");}
    if(scar_m){printf("\nThis is a Scalar Matrix");}
    if(ident_m){printf("\nThis is a Identity Matrix");}
    if(upr_m){printf("\nThis is a Upper Triangle Matrix");}
    if(lwr_m){printf("\nThis is a Lower Triangle Matrix");}
    if(sym_m){printf("\nThis is a Symmetric Matrix");}
    if(sksym_m){printf("\nThis is a Skew Symmetric Matrix");}
    if(sing_m){printf("\nThis is a Singular Matrix");}
    if(nsing_m){printf("\nThis is a Non-Singular Matrix");}
    printf("\nEqual Matrix: Requires two matrices to compare. Instructor only mentioned to input one matrix.");

    return 0;
}
