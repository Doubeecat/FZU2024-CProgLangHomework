#include <stdio.h>

int main() {
    int l,r;
    scanf("%d %d\n",&l,&r);
    int ans = 0;
    for (int i = l;i <= r;++i) ans += i;
    printf("%d\n",ans);
    return 0;
}