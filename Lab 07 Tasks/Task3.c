#include<stdio.h>
int main(void){
    int i,num,p_count=0,f_count=0,error=0;
    float avg=0;
    char pass[10], fail[10];
    for(i=0;i<10;i++){
        printf("Enter the marks of Student No. %d: ",i + 1);
        scanf("%d",&num);
        (num >= 0 &&  num <= 5)?(fail[f_count++] = num):
        (num > 5 && num <= 10)?(pass[p_count++] = num):
        (num == -1)?(error++):(printf("\nInvalid Input! The Range is 1-10\n",i--));
        if(error == 1){break;}
    }
    printf("\nPassing Students Marks:");
    for(i=0;i<p_count;i++){
        printf("\n%d",pass[i]);   
        avg+=pass[i];
    }
    avg/=p_count;
    printf("\nPassing Students Average = %.1f",avg);
    printf("\n\nFailing Students Marks:",avg=0);
    for(i=0;i<f_count;i++){
        printf("\n%d",fail[i]);
        avg+=fail[i];
    }
    avg/=f_count;
    printf("\nFailing Students Average = %.1f",avg);

    return 0;
}
