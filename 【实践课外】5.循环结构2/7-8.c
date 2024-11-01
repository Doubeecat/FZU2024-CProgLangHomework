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
    int n;scanf("%d",&n);
    for (int i = n;i >= 2;--i) {
        int cnt = 2*i-1;
        for (int j = 1;j <= n-i;++j) putchar(' ');
        for (int j = 1;j <= cnt;++j) putchar('#');
        //for (int j = 1;j <= n-i;++j) putchar(' ');
        puts("");
    }
    for (int i = 1;i < n;++i) putchar(' ');
    puts("#");
    for (int i = 2;i <= n;++i) {
        int cnt = 2*i-1;
        for (int j = 1;j <= n-i;++j) putchar(' ');
        for (int j = 1;j <= cnt;++j) putchar('#');
        //for (int j = 1;j <= n-i;++j) putchar(' ');
        puts("");
    }
    return 0;
}