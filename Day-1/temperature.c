#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    fahr = upper;
    printf("Conversion Started\n");
    while(fahr>=lower){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3c %6c\n", 'F', 'C');
        printf("%3.0f %6.2f\n", fahr, celsius);
        printf("\n");
        fahr = fahr - step;
    }
    printf("Conversion Ended\n");
    return 0;
}