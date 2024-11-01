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

bool judge(int x) {
    for (int i = 2;i * i <= x;++i) {
        if (x % i ==0 ) return 0;
    }
    return 1;
}

int main() {
    int n;scanf("%d",&n);
    bool flag = 0;
    for (int i = 2;i <= n;++i) {
        if (judge(pow(2,i) - 1)) {
            printf("%d\n",(int)pow(2,i) - 1);
            flag = 1;
        }
    }
    if (!flag) puts("None");
    return 0;
}