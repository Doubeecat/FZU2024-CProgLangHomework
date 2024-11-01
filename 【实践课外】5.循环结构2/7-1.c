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
    int l,r;scanf("%d %d\n",&l,&r);
    int ans = 0,cnt = 0;
    for (int i = l;i <= r;++i) {
        printf("%5d",i);
        if (++cnt % 5 == 0) puts("");
        ans += i;
    }
    if ((r-l+1) % 5)puts("");
    printf("Sum = %d",ans);
    return 0;
}