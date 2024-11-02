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
#define read(a) {char c;while((c=getchar())>47) a=a*10+(c^48);}

#define ll long long
int a,b;
int main() {
    read(a);read(b);
    printf("%d\n",min(a,b));
    return 0;
}