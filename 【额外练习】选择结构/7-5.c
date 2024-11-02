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
    double a,b;scanf("%lf %lf\n",&a,&b);
    printf("%.3lf %.3lf",max(a,b),min(a,b));
    return 0;
}