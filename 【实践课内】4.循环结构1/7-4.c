#include <stdio.h>

int main() {
    int n;scanf("%d",&n);
    int ans = 0;
    for (int i = 1;i <= n;++i) {
        int x;scanf("%d",&x);
        ans += x % 4 == 0;
    }
    printf("%d\n",ans);
    return 0;
}