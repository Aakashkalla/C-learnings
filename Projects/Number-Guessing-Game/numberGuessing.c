// Number Guessing game with pointers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomNumber(int *a, int *b, int *random);

int main(){
    srand(time(NULL));
    int chance=5;
    int min = 0;
    int max = 100;
    int random;
    int guess;
    randomNumber(&min, &max, &random);
    printf("WELCOME TO NUMBER GUESSING GAME\n");
    printf("You have 5 chance to guess the random Number between 0-100\n");
    while(chance > 0){
        printf("You have %d chance remaining\n", chance);
        printf("Your Guess: ");
        scanf("%d", &guess);
        if(guess > 100 || guess < 0){
            printf("Try to guess between 0-100\n");
        }else{
            if(guess==random){
                printf("WOOHOOOO! YOU GUESSED IT RIGHT!!\n");
                break;
            }else{
                if(guess> random){
                    printf("NUMBER IS LOWER!\n");
                }else{
                    printf("NUMBER IS HIGHER!\n");
                }
                chance--;
            }
        }
    }
    if(guess != random){
        printf("THE RANDOM NUMBER WAS %d\n", random);
        printf("HARD LUCK!\n");
    }
}

void randomNumber(int *a, int *b, int *random){
    *random = (rand() % (*b - *a + 1)) + *a;
}