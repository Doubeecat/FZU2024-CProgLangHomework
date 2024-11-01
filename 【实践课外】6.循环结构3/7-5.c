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
#define int ll
const int mod = 114514;
int ffpow(int a,int b) {
    int ans = 1;
    for (;b;b >>= 1) {
        if (b & 1) ans = ans * a % mod;
        a = a * a %mod;
    }
    return ans;
}

signed main() {
    int n,k;scanf("%lld %lld",&n,&k);
    int ans = 0;
    for (int i = 1;i <= n;++i) {
        ans = (ans + ffpow(i,k)) % mod;
    }
    printf("%lld\n",ans);
    return 0;
}