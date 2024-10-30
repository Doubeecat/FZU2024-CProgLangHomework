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
    int a = 1,b = 2,ans = 0;
    int n;scanf("%d",&n);

    for (int i = 2;i <= n;++i) {
        int c = (a+b)%3;
        ans = c;
        a=b;b=c;
    }
    if (n == 0) ans = a;
    if (n == 1) ans = b;
    if (!ans) puts("YES");
    else puts("NO");
    return 0;
}