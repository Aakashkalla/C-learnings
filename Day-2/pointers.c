#include <stdio.h>

void increment(int *p);

int main(){
    int p;
    int *q;
    q = &p;
    p=10;
    printf("Value of p is : %d\n", p); //prints 10
    increment(q);
    printf("Value of p is : %d\n", p);// prints 11
}

void increment(int *p){
    *p += 1;
}