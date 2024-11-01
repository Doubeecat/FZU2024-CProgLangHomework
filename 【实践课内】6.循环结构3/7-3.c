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

int solve(int x) {
    int ans = 0;
    while (x) {
        ans += x % 10;x /= 10;
    }
    return ans;
}

int main() {
    int x;scanf("%d",&x);
    while (x >= 10) {
        x = solve(x);
    }
    printf("%d\n",x);
    return 0; 
}