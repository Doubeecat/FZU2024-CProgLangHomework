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
    int a1 = 0,a2 = 0;
    for (int i = 1;i <= n;++i) {
        int x;scanf("%d",&x);
        if (x > 0) a1 += x;
        else a2 += x;
    }
    if (!a1 && !a2) puts("no positive number no negative number");
    else if (!a1) printf("no positive number %d\n",a2);
    else if (!a2) printf("%d no negative number");
    else printf("%d %d\n",a1,a2);
    return 0;
}