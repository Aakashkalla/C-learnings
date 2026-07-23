#include <stdio.h>

void checkResult(int marks);

int main(void){
    int marks,rollNo;
    float attendancePercentage;
    printf("====== Student Info ======\n");
    printf("Enter your roll number: ");
    scanf("%d", &rollNo);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Enter your attendace percentage: ");
    scanf("%f", &attendancePercentage);

    printf("\n");

    printf("====== Summary ======\n");

    printf("Roll Number: %d\n", rollNo);
    printf("Marks: %d\n", marks);
    printf("Attendance: %.2f\n", attendancePercentage);
    checkResult(marks);
    return 0;
}

void checkResult(int marks){
    if(marks>=40){
        printf("Result: PASS\n");
    }else{
        printf("Result: FAIL\n");
    }
}