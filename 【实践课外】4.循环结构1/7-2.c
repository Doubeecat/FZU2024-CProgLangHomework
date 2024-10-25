#include <stdio.h>

#define int long long
signed main() {
    int x;scanf("%lld",&x);
    bool flag = 1;
    for (int i = 2;i * i <= x;++i) {
        if (x % i == 0) flag = 0;
    }
    if (x <= 1) flag = 0;
    if (flag) puts("Yes");
    else puts("No");
}