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
int n,a[10010];
int main() {
    scanf("%d",&n);
    for (int i = 1;i <= n;++i) scanf("%d",&a[i]);
    int maxx = 0,secmax = 0;
    for (int i = 1;i <= n;++i) maxx = max(maxx,a[i]);
    for (int i = 1;i <= n;++i) {
        if (a[i] > secmax && a[i] != maxx) secmax = a[i];
    }
    printf("%d %d\n",maxx,secmax);
    return 0;
}