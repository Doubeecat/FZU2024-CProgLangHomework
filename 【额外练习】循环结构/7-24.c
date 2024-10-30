/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define ll long long
int n,f[11010];
int main() {
    scanf("%d",&n);
    f[1] = f[2] = 1;
    for (int i = 3;i <= n;++i) {
        f[i] = f[i-1] + f[i-2];
    }
    printf("%d\n",f[n]);
    return 0;
}