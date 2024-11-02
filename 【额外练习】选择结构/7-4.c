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
    bool flag = 0;
    if (x % 4 == 0) {
        if (x % 100 == 0) {
            if (x % 400 == 0) flag = 1;
        } else {
            flag =1;
        }
    }
    if (flag) puts("YES");
    else puts("NO");
    return 0;
}