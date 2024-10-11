#include <stdio.h>
#include <math.h>

int max(int a,int b) {
    return a > b ? a : b;
}

int main() {
    int a,b,c;
    scanf("%d %d %d\n",&a,&b,&c);
    printf("%d\n",max(max(a,b),c));
}