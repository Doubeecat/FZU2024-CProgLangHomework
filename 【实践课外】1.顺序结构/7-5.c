#include <stdio.h>

double p[4],q[4];
int n;
int main() {
    scanf("%d\n",&n);
    for (int i = 1;i <= 3;++i) {
        double x;scanf("%lf",&x);
        p[i] = x;
    }
    for (int i = 1;i <= 3;++i) {
        double x;scanf("%lf",&x);
        q[i] = x;
    }
    double ans = n * (p[1] * q[2] + p[2] * q[3] + p[3] * q[1]);
    printf("%.4lf\n",ans);
    return 0;
}