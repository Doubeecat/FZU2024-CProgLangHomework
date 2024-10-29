/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long
int n,a,b,c,x,y;
int main() {
    scanf("%d %d %d %d %d %d", &n,&a,&b,&c,&x,&y);
    ll now = a;
    ll ans = 0;
    for (int i = 1;i <= n;++i) {
        if (now > c) {
            if (i % x == 0) ans += now;
            else if (i % y == 0) ans += now;
        }
        now += b;
    }
    printf("%lld\n",ans);
    return 0;
}