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

int main() {
    ll p;scanf("%lld",&p);
    for (ll a = 1;a <= 2000;++a) {
        for (ll b = 1;b <= a;++b) {
            if (a*a*a - b*b*b == p) {
                puts("YES");
                return 0;
            }
        } 
    }
    puts("NO");
    return 0;
}