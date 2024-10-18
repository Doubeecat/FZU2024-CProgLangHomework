#include <stdio.h>

int main() {
    int n;scanf("%d\n",&n);
    int ans1 = 7 * n;
    int ans2 = 5 * n + 15;
    printf("%d\n",ans1 < ans2 ? ans1 : ans2);
    return 0;
}