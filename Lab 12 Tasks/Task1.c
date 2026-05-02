#include<stdio.h>
#include<stdlib.h>
// (a) Static arrays like int grades[100] allocate memory at compile time.
//     If fewer students enroll, memory is wasted. If more enroll, the array overflows.
//     Dynamic allocation with malloc happens at runtime, so we only use what we need.
 
// (c) Forgetting free() causes a memory leak, the allocated heap memory is never
//     returned to the OS. In long-running systems this builds up and eventually
//     crashes the program or slows the entire system down.
int main(void){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    float *grades = (float *)malloc(n * sizeof(float));
    if(grades == NULL){ printf("Memory allocation failed.\n"); return 1; }
    for(int i = 0; i < n; i++){
        printf("Enter grade for student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }
    printf("\nStudent Grades:\n");
    for(int i = 0; i < n; i++)
        printf("Student %d: %.2f\n", i + 1, grades[i]);
    free(grades);
    return 0;
}
