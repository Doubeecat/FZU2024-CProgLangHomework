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
int n;
int a[10010];
double ans;
int main() {
    scanf("%d",&n);
    int maxx = 0,minn = 0x3f3f3f3f;
    for (int i = 1;i <= n;++i) scanf("%d",&a[i]),ans += a[i],maxx = max(maxx,a[i]),minn = min(minn,a[i]);
    ans -= maxx + minn;
    ans /= (double)(n-2);
    printf("%.1lf\n",ans);
    return 0;
}