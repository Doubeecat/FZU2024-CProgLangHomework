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
    int cnt = 0;
    for (int i = n;i >= 1;--i) {
        for (int j = 1;j <= i;++j) {
            printf("%c ",'A'+(cnt++));
        }
        puts("");
    }
    return 0;
}