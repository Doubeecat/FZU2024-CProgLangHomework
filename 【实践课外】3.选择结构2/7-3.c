#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a % (b+1) == 0) puts("First win");
    else puts("Second win");
}