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

bool judge(int x) {
    bool flag = 0;
    if (x == 1) return 1;
    for (int i = 2;i * i <= x;++i) {
        if (x %i  ==0) return 1;
    }
    return 0;
}
char s[1000];

int main() {
    scanf("%s",s+1);
    int n = strlen(s+1);
    int x = 0;
    for (int i =1;i <= n;++i) x += s[i] - '0';
    if (!judge(x)) puts("Congratulations, Dao!");
    else puts("So pity, Dao!");
    return 0;
}