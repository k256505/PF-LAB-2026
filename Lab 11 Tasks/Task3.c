#include<stdio.h>
 
int countWays(int n){
    if(n == 0 || n == 1) return 1;
    return countWays(n - 1) + countWays(n - 2);
}
 
void printPaths(int n, int path[], int idx){
    if(n == 0){
        for(int i = 0; i < idx; i++){
            printf("%d", path[i]);
            if(i < idx - 1) printf("+");
        }
        printf("\n");
        return;
    }
    if(n >= 1){ path[idx] = 1; printPaths(n - 1, path, idx + 1); }
    if(n >= 2){ path[idx] = 2; printPaths(n - 2, path, idx + 1); }
}
 
int main(void){
    int n;
    printf("Enter N (1-15): ");
    scanf("%d", &n);
    printf("Total ways to reach step %d: %d\n", n, countWays(n));
    printf("Paths for N = %d:\n", n);
    int path[20];
    printPaths(n, path, 0);
    return 0;
}