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
const int N = 10000 + 10;
ll n,p,t,pos[10000],ans,sum;
int main() {
    scanf("%lld %lld %lld\n",&n,&p,&t);
    pos[0] = p;
    for (int i = 1;i <= n;++i) {
        scanf("%lld",&pos[i]);
        if (abs(pos[i] - pos[i-1]) <= t) ++ans,sum +=abs(pos[i] - pos[i-1]);
        else pos[i] = pos[i-1];
    }
    printf("%lld %lld\n",ans,sum);
    return 0;
}