#include <stdio.h>

int main() {
    int n;scanf("%d\n",&n);
    int now = 1;
    double ans = 0;
    for (int i = 1;i <= n;++i){
        ans += (double) 1.0 / now;
        now += 2;
    }
    printf("%.2lf",ans);
}