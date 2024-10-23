#include <stdio.h>
#include <math.h>

int main() {
    double x,y;scanf("%lf %lf",&x,&y);
    if (x > y) {
        puts("1");
        return 0;
    }
    if (x == 0 || (x < 0 && x <= y)) {
        puts("\\^O^/");
    } else {
        long long ans = y/x;
        ++ans;
        printf("%lld\n",ans);
    }
}
