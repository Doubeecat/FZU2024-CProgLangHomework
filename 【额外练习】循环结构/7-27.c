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

int main() {
    int n;scanf("%d",&n);
    double ans = 0,ans2 = 0;
    for (int i = 1;i <= n;++i) {
        double x,y;scanf("%lf %lf",&x,&y);
        ans += x;ans2 += y;
    }
    printf("%.3lf\n",ans/ans2);
    return 0;
}