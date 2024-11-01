/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define ll long long

int main() {
    int number, times, guesstimes = 0;

    scanf("%d %d", &number, &times);

    int guess;

    while (1) {
        scanf("%d", &guess);
        guesstimes++;
        if ((guesstimes > times) || (guess < 0 && guesstimes <= times)) {
            printf("Game Over\n");

            return 0;
        }
        if (guess > number) {
            printf("Too big\n");
        }
        if (guess < number) {
            printf("Too small\n");
        }
        if (guess == number) {
            if (guesstimes == 1) {
                printf("Bingo!\n");
            }
            else if (guesstimes <= 3) {
                printf("Lucky You!\n");
            }
            else {
                printf("Good Guess!\n");
            }

            return 0;
        }
    }

}