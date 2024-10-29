#include <stdio.h>

int main() {
    int ans = 0;
    while (1) {
        int x;scanf("%d", &x);
        if (x <= 0) break;
        ans += x * (x % 2);
    }
    printf("%d\n",ans);
    return 0;
}