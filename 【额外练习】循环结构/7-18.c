/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define ll long long

int main() {
    ll x;scanf("%lld",&x);
    ll cnt = 0;
    for (ll i = 1;i*i <= x;++i) {
        if (x % i ==0) {
            ++cnt;
            if (i*i!=x)++cnt;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}