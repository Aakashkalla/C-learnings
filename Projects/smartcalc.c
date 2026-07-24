#include <stdio.h>

// Simple Calculator which will keep doing arithmetic operations until user
// prompts n
double calculate(double a, double b, char operation);
void calcProcess();
void exitProcess();

int main(void) {
    printf("Welcome to Smart Calculator\n");
    calcProcess();
    exitProcess();
    return 0;
}

double calculate(double a, double b, char operation){
    switch(operation){
        case '+':
            return a + b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
    return 0;
}

void calcProcess(){
    double numberOne, numberTwo;
    double answer;
    char operation;
    printf("Choose Your operation(+,-,*,/): ");
    scanf(" %c", &operation);
    while (getchar() != '\n');
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        printf("Wrong Operation!!! Please select only these 4: +,-,*,/\n");
        printf("Choose your operation(+,-,*,/): ");
        scanf(" %c", &operation);
        while (getchar() != '\n');
    }
    printf("Your Operation is: %c\n", operation);
    printf("Enter Number One: ");
    while (scanf("%lf", &numberOne) != 1) {
        printf("Invalid input. Enter a number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    printf("Enter Number Two: ");
    while (scanf("%lf", &numberTwo) != 1) {
        printf("Invalid input. Enter a number: ");
        while (getchar() != '\n');
    }
    while (getchar() != '\n');
    if(numberTwo == 0 && operation == '/'){
        printf("Second Number can't be zero\n");
    }else{
        printf("Your numbers are %.2lf and %.2lf\n", numberOne, numberTwo);
        answer = calculate(numberOne, numberTwo, operation);
        printf("Your answer is %.2lf\n", answer);
    }
}

void exitProcess(){
    char exit;
    printf("Do you wish to continue (y/n): ");
    scanf(" %c", &exit);
    while(exit != 'y' && exit!= 'n'){
        printf("Invalid input. y for continuing, n for exit.\n");
        printf("Do you wish to continue (y/n): ");
        scanf(" %c", &exit);
        while (getchar() != '\n');
    }
    while(exit == 'y'){
        calcProcess();
        printf("Do you wish to continue (y/n): ");
        scanf(" %c", &exit);
    }
}