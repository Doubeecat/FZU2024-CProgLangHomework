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
#define int ll

int C[50][50];

int main() {
    int n,m;scanf("%lld %lld",&n,&m);
    for (int i = 0;i <= n;++i) C[i][1]= 1;
    for (int i = 1;i <= 30;++i) {
        for (int j = 1;j <= i;++j) {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) %10;
        }
    }
    for (int i = n;i <= m;++i) {
        int cnt = m - i;
        for (int j = 1;j <= cnt;++j) putchar(' ');
        for (int j = 1;j < i;++j) printf("%lld ",C[i][j] %10);
        printf("%lld\n",C[i][i]%10);
    }
    return 0;
}