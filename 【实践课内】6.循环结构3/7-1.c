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
    double ans = 0.0,bas = 1,f = 1;
    for (int i = 1;i <= n;++i) {
        ans += f* (1.0/bas);
        bas += 3;f *= -1;
    }
    printf("sum = %.3lf\n",ans);
    return 0;
}