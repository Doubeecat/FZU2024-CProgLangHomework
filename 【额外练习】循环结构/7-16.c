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

void solve() {
    int a,b;scanf("%d %d\n",&a,&b);
    int ans = 0;
    for (int i = 1;i < a;++i) {
        if (a % i == 0) {
            ans += i;
        }
    }
    int ans2= 0;
    for (int i = 1;i < b;++i) {
        if (b % i == 0) {
            ans2 += i;
        }
    }
    if (ans == b && ans2 == a) puts("YES");
    else puts("NO");
}

int main() {
    int T;scanf("%d",&T);
    while (T--) solve();
    return 0; 
}