#include<stdio.h>

int main(void){
    int attendance[4][5] = {
        {1, 0, 1, 1, 0},
        {0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}
    };

    int (*p)[5] = attendance;

    printf("===== Attendance Report =====\n");
    for(int i = 0; i < 4; i++){
        int total = 0;
        printf("Student %d: ", i + 1);
        for(int j = 0; j < 5; j++){
            printf("%d ", (*(p + i))[j]);
            total += (*(p + i))[j];
        }
        printf("| Total: %d", total);
        if(total < 3) printf(" [At risk]");
        printf("\n");
    }
    printf("=============================\n");

    return 0;
}
