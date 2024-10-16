#include <stdio.h>

int main() {
    double a,t,b;
    scanf("%lf %lf %lf\n",&a,&t,&b);
    double tmp = t / (a-1);
    double ans = (b-1) * tmp;
    printf("%d\n",(int)ans);
    return 0;
}