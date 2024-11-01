/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define ll long long

int main() {
    ll x;scanf("%lld",&x);
    ll ans = 0;
    for (ll i = 1;i * i <= x;++i) {
        if (x % i ==0) {
            ans += i;
            if (i*i!=x) {
                ans += x / i;
            }
        }
    }
    printf("%lld\n",ans);
    return 0;
}