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
const int mod = 10000;
int ffpow(int a,int b) {
    int ans = 1;
    for (;b;b >>= 1) {
        if (b & 1) ans = ans * a % mod;
        a = a * a % mod;
    }
    return ans;
}
int a,b;
int main() {
    scanf("%d %d",&a,&b);
    printf("%04d\n",ffpow(a,b));
    return 0;
}