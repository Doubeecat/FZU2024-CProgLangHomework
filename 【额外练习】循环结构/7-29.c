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
#define N 10010
#define INF 0x3f3f3f3f

int t[N],n;
int main() {
    scanf("%d",&n);
    for (int i = 1;i <= n;++i) {
        scanf("%d",&t[i]);
    }
    int max1 = 0,max2 = 0;
    for (int i = 1;i <= n;++i) max1=max(max1,t[i]);
    for (int i = 1;i <= n;++i) {
        if (t[i] > max2 && t[i] != max1) max2 = t[i];
    }
    int min1 = INF,min2 = INF;
    for (int i = 1;i <= n;++i) min1=min(min1,t[i]);
    for (int i = 1;i <= n;++i) {
        if (t[i] < min2 && t[i] != min1) min2 = t[i];
    }
    printf("%d %d\n",max2,min2);
    return 0;
}