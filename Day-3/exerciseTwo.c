// Swap numbers, user input number one and two, and then swap them.  
#include <stdio.h>
void swap(int *a, int *b);

int main(){
    int a,b;
    int *p, *q;
    p = &a,
    q = &b,
    printf("Welcome to Number Swapping Game!\n");
    printf("Enter Your First Number: ");
    scanf("%d", &a);
    printf("Enter Your Second Number: ");
    scanf("%d", &b);
    printf("Your number one is : %d\n", a);
    printf("Your number two is : %d\n", b);
    printf("Swapping Started!\n");
    swap(p, q);
    printf("Swapping Ended!\n");
    printf("Your number one now is : %d\n", a);
    printf("Your number two now is : %d\n", b);
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
