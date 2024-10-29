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
int n,s1,s2;
int a[6] = {2,3,4,5,6,7};
int cnt(int x) {
    if(x == 1) return 7;
    if(x == 2) return 13;
    if(x == 3) return 18;
    if(x == 4) return 22;
    if(x == 5) return 25;
    if(x == 6) return 27;
    if(x == 7) return 28;
    if(x > 7) return 3 + cnt(x-1);
}
int main() {
    scanf("%d %d %d",&n,&s1,&s2);
    int nowcnt = n / 2;
    s1 += cnt(n);
    if (s1 > s2) puts("YES");
    else puts("NO");
    return 0;
}