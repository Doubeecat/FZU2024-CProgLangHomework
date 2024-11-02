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
    int a,b,c;read(a);read(b);read(c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a)) puts("Yes");
    else puts("No");
    return 0;
}