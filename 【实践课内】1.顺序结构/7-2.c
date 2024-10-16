#include <stdio.h>

int main() {
    int x;scanf("%d\n",&x);
    int p1 = x % 10;x /= 10;
    int p2 = x % 10;x /= 10;
    int p3 = x;
    int ans = p1 * 100 + p2 * 10 + p3;
    printf("%d\n",ans);
    return 0;
}