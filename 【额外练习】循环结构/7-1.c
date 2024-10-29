/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long
ll f[10010],n;
int main() {
    scanf("%d",&n);
    double ans = 0;
    f[1] = f[2] = 1;
    for (int i = 3;i <= n+2;++i) {
        f[i] = f[i-1] + f[i-2];
    }
    for (int i = 1;i <= n;++i) {
        ans += (double)f[i+2]/f[i+1];
    }
    printf("%.6lf\n",ans);
    return 0;
}