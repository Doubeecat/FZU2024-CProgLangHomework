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
const double eps = 1e-6;
double a,b,c,d;

double f(double x) {
    return d * x * x * x + c * x *x+b * x + a;
}

int main() {
    scanf("%lf %lf %lf %lf",&d,&c,&b,&a);
    double l,r;
    scanf("%lf %lf",&l,&r);
    double ans = 0;
    while (r - l > eps ) {
        double mid = (l+r)/2.0;
        //printf("%lf %lf\n",l,r);
        if (f(mid)*f(l) > 0) l = mid;
        else r = mid;
    }
    printf("%.2lf",l);
    return 0;
}