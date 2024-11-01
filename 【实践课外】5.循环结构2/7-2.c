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
int a,n;
int gen(int x,int p) {
    int ans = 0;
    for (int i = 1;i <= p;++i) {
        ans = ans * 10 + a;
    }
    return ans;
}
int main() {
    scanf("%d %d",&a,&n);
    int ans = 0;
    for (int i =1;i <= n;++i) ans +=gen(a,i);
    printf("%d\n",ans);
    return 0;
}