#include <stdio.h>

int main() {
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int ans = 0;
    if (b > 80 && e) ans += 8000;
    if (b > 85 && c > 80) ans += 4000;
    if (b > 90) ans += 2000;
    if (c > 80 && d) ans += 850;
    printf("%d\n",ans);
}