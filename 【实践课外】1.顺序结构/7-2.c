#include <stdio.h>
#include <math.h>

int main() {
    double m,y,r;
    scanf("%lf %lf %lf\n",&m,&y,&r);
    double ans = m * pow(1 + r,y) - m;
    printf("interest = %.2lf\n",ans);
    return 0;
}