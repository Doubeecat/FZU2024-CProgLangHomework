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
    int n;scanf("%d",&n);
    int ans1 = 0,ans2 = 0;
    for (int i = 1;i <= n;++i) {
        int x;scanf("%d",&x);
        if (x < 0)ans2+=x;
        else ans1 += x;
    }
    if (!ans1 && !ans2) printf("no positive number no negative number");
    else if (!ans1) printf("no positive number %d",ans2);
    else if (!ans2) printf("%d no negative number",ans1);
    else printf("%d %d\n",ans1,ans2);
    return 0;
}