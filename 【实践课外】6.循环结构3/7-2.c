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
int a[1000];
int main() {
    int n,x;scanf("%d %d\n",&n,&x);
    int pos = 0;
    while (n) {
        a[pos++] = n % x;n /= x;
    }
    for (int i = pos-1;i >= 0;--i) printf("%d",a[i]);
    return 0;
}