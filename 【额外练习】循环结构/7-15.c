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
    int n;scanf("%d",&n);
    int ans = 0;
    for (int i =1;i <= n;++i) {
        int x;scanf("%d",&x);
        if (i % 2) ans += x;
        else ans -= x;
    }
    printf("%d\n",ans);
    return 0;
}