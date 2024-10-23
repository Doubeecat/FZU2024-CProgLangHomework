#include <stdio.h>

int main() {
    int x;scanf("%d",&x);
    char grade;
    if (x < 0 || x > 100) {
        puts("Input error!");
    } else if (x <60) {
        puts("E");
    } else if (x < 70) {
        puts("D");
    } else if (x < 80) {
        puts("C");
    } else if (x < 90) {
        puts("B");
    } else {
        puts("A");
    }
}