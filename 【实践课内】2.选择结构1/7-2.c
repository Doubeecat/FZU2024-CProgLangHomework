#include <stdio.h>

int main() {
    int x;scanf("%d",&x);
    printf("y=%d\n",(x % 2 ? 3*x : x*2));
    return 0;
}