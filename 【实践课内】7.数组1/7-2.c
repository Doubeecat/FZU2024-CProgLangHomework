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
    int minn = 0x3f3f3f3f,maxx = 0,sum = 0;
    for (int i = 1;i <= 6;++i) {
        int x;scanf("%d",&x);
        sum += x;maxx = max(maxx,x);
        minn = min(minn,x);
    }
    sum -= (maxx + minn);
    printf("%d\n",sum);
    return 0;
}