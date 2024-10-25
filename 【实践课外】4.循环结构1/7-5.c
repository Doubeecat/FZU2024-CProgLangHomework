#include <stdio.h>

int ans1,ans2;

int main() {
    int l,r;scanf("%d %d\n",&l,&r);
    for (int i = l;i <= r;++i) {
        if (i % 2) ans1 += i * i;
        else ans2 += i*i*i;
    }
    printf("%d %d\n",ans1,ans2);
    
}