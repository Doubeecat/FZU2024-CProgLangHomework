#include <stdio.h>

int n,cnt;
double a[100010],avg;

int main() {
    scanf("%d",&n);
    if (!n) {
        
    printf("average = %.1lf\ncount = %d",avg,cnt);
    return 0;
    }
    for (int i = 1;i <= n;++i) scanf("%lf",a+i);
    for (int i = 1;i <= n;++i) {
        avg += (double)a[i];
        cnt += (a[i] >= 60);
    }
    avg /= (double)  n;
    printf("average = %.1lf\ncount = %d",avg,cnt);
}