#include <stdio.h>

int main() {
    int now = 5;
    int n;scanf("%d\n",&n);
    now = (now + n) % 7;
    if (now == 1) {
        puts("Monday");
    } else if (now == 2) {
        puts("Tuesday");
    } else if (now == 3) {
        puts("Wednesday");
    } else if (now == 4) {
        puts("Thursday");
    } else if (now == 5) {
        puts("Friday");
    } else if (now == 6) {
        puts("Saturday");
    } else {
        puts("Sunday");
    }
    return 0;
}