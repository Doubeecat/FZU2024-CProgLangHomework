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
ll n,now,cnt;
int main() {
    scanf("%lld",&n);
    now = cnt = 0;
    for (int i = 1;;++i) {
        now += i;++cnt;
        if (now >= n) {
            printf("%lld\n",cnt);
            return 0;
        }
    }
    return 0;
}