#include<stdio.h>
#include<string.h>
 
struct Department {
    char deptCode[10];
    char deptName[50];
};
 
struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};
 
void filterByDept(struct Course c[], int n, char *code){
    printf("\nCourses in department %s:\n", code);
    int found = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(c[i].dept.deptCode, code) == 0){
            printf("%s - %s (%d credits)\n", c[i].courseCode, c[i].courseName, c[i].creditHours);
            found = 1;
        }
    }
    if(!found) printf("No courses found.\n");
}
 
int main(void){
    struct Course c[3];
    for(int i = 0; i < 3; i++){
        printf("\nCourse %d:\n", i + 1);
        printf("Course Code: ");   scanf(" %s", c[i].courseCode);
        printf("Course Name: ");   scanf(" %[^\n]", c[i].courseName);
        printf("Credit Hours: ");  scanf("%d", &c[i].creditHours);
        printf("Dept Code: ");     scanf(" %s", c[i].dept.deptCode);
        printf("Dept Name: ");     scanf(" %[^\n]", c[i].dept.deptName);
    }
    printf("\n%-12s %-30s %-8s %-10s %-20s\n", "Code", "Name", "Credits", "DeptCode", "DeptName");
    printf("----------------------------------------------------------------------\n");
    for(int i = 0; i < 3; i++)
        printf("%-12s %-30s %-8d %-10s %-20s\n", c[i].courseCode, c[i].courseName, c[i].creditHours, c[i].dept.deptCode, c[i].dept.deptName);
 
    char code[10];
    printf("\nEnter dept code to filter: ");
    scanf(" %s", code);
    filterByDept(c, 3, code);
    return 0;
}