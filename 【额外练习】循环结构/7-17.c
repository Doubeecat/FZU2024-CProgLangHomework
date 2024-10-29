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
ll n,a,b;
int main() {
    scanf("%lld %lld %lld\n",&n,&a,&b);
    ll s1 = 0,s2 = 0;
    for (int i = 1;i <= n;++i) {
        ll x,y,p;scanf("%lld %lld %lld\n",&x,&y,&p);
        if (y > a * x + b) s1 += p;
        if  (y < a * x + b) s2+=p;
    }
    if (s1 > s2) puts("_RiverLoong is richer.");
    else if (s1 < s2) puts("Anani_leaf is richer.");
    else puts("They are as rich as each other.");
    printf("%lld %lld\n",s1,s2);
    return 0;
}