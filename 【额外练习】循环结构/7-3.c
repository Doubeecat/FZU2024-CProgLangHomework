/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long
int n;
int main() {
    scanf("%d",&n);
    int ans = 1;
    for (int i = 2;i < n;++i) ans = (ans + 1) * 2;
    printf("%d\n",ans);
    return 0;
}