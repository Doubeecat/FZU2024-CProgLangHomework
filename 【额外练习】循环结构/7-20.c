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
ll f[1011];

int main() {
    f[1] = f[2] = 1;
    for (int i = 3;i <= 400;++i) {
        f[i] = (f[i-1]+f[i-2]) % 1000007;
    }
    int n;scanf("%d",&n);
    for (int i = 1;i <= n;++i) {
        int x;scanf("%d",&x);
        printf("Case %d:\n%d\n",i,f[x+1]);
    }
    return 0;
}