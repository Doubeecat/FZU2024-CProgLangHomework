/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define ll long long
char s[1000];
int main() {
    scanf("%s",s+1);
    int n = strlen(s+1);
    int ans = 0;
    for (int i = 1;i <= n;++i) ans +=( isdigit(s[i])>0);
    printf("%d\n",ans);
    return 0; 
}