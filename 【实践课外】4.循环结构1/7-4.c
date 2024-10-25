#include <stdio.h>

int main() {
    int n;scanf("%d\n",&n);
    for (int i = 1;i <= n;++i) {
        char opt;double x;scanf("%c %lf\n",&opt,&x);
        double ans = 0;
        if (opt == 'F') {
            ans = x * 1.09;
        } else {
            ans = x / 1.09;
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}