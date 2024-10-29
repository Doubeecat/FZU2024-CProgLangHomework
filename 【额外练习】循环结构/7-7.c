/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long

int main() {
    int x;
    while (scanf("%d",&x) == 1) {
        if (x < 1000) continue;
        int ans = sqrt(x);
        printf("%d\n",ans);
        break;
    }
    return 0;
}