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
char s[1001];
int a[4];
int main() {
    gets(s+1);
    int n = strlen(s+1);
    for (int i = 1;i <= n;++i) {
        //printf("%c",s[i]);
        if (isdigit(s[i])) a[2]++;
        else if (s[i] == ' ') a[1]++;
        else if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')) ++a[0];
        else ++a[3];
    }
    printf("%d %d %d %d\n",a[0],a[1],a[2],a[3]);
    return 0;
}