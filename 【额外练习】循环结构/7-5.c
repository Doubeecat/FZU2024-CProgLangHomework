/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long
double a,x;
int main() {
    scanf("%lf %lf",&a,&x);
    double ans = 0;
    int cnt = 0;
    while (ans < x) {
        ans += a;++cnt;
        a = a * 0.98;
    }
    printf("%d\n",cnt);
    return 0;
}