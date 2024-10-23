#include <stdio.h>

int main() {
    int a,b,c,d,e;
    int ans1 = 0,ans2 = 0;
    int x;
    for (int i = 1;i <= 5;++i) {
        scanf("%d",&x);
        if (x % 2) ans1 += x * x;
        else ans2 += x * x;
    }
    if (!ans1) puts("No Odd Number");
    else printf("%d\n",ans1);
    if (!ans2) puts("No Even Number");
    else printf("%d\n",ans2);

}