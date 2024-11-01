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
    int a = 1,b = 2,n,c = 0;
    scanf("%d",&n);
    if (n == 0) c = 1;
    else if (n == 1) c = 2;
    for (int i = 2;i <= n;++i) {
        c = (a+b)%3;
        a=b,b=c;
    }
    if (c % 3 == 0) puts("YES");
    else puts("NO");
    return 0;
}