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
#define read(a) {char c;while((c=getchar())>47) a=a*10+(c^48);}


int main() {
    int x;read(x);
    int ans = 4;
    if (x == 5) ans += 2;
    if (x == 6) ans += 6;
    if (x == 7) ans += 4;
    printf("%d\n",ans);
    return 0;
}