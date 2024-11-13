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
int f[100];

int main() {
    f[1] = f[2] = 1;
    for (int i = 3;i <= 12;++i) f[i] = f[i-1] + f[i-2];
    int cnt = 0;
    for (int i = 1;i <= 4;++i) {
        for (int j = 1;j <= 3;++j) {
            printf("%6d",f[++cnt]);
        } 
        puts("");
    }
    return 0;
}