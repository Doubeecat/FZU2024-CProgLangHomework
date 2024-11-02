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
#define read(a) {char c;while((c=getchar())>47) a=a*10+(c^48);}


int main() {
    double x;scanf("%lf",&x);
    double ans = 0;
    if (x < 1) ans = x;
    else if (x < 10) ans = sqrt(2*x-1);
    else ans = log(3*x-11);
    printf("%.3lf\n",ans);
    return 0;
}