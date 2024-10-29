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
    int ans = 0,val = 0;
    for (int i = 1;i <= 7;++i) {
        int x,y;scanf("%d %d",&x,&y);
        if (x + y >= 8) {
            if (x + y > val) {
                ans = i;val = x + y;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}