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
    int ans = 0;
    for (int i = 1;i < n;++i) {
        if (n % i == 0) ans += i;
    }
    if (ans == n) puts("YES");
    else puts("NO");
    return 0;
}