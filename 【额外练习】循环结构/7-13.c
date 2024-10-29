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
    double h = 100,ans = 100;
    for (int i = 1;i < n;++i) {
        h *= 0.5;
        ans += h;
    }
    h /= 2;
    printf("%.4lf %.4lf\n",ans,h);
    return 0;
}