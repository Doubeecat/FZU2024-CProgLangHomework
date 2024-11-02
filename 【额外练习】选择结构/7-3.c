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
    char c = getchar();
    if (isdigit(c)) printf("%d\n",c);
    else puts("input error");
    return 0;
}