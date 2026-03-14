#include<stdio.h>
int main(void){
    int i,j,max,avl=0,bkd=0,temp,seats[5][6]={{1,0,0,1,0,1},{1,0,0,0,0,1},{0,0,1,1,0,0},{0,1,1,1,1,0},{0,0,0,0,0,0}};
    // 1 = Booked Seat
    // 0 = Available Seat
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            (seats[i][j] != 1)?(avl++):(bkd++);
        }
        (i == 0)?(max = i+1,temp = bkd,bkd=0):(bkd > temp)?(max=i+1,temp=bkd,bkd=0):(bkd=0);
    }
    printf("Available Seats = %d\nRow No. %d has the maximum booked seats",avl,max);
    return 0;
}
