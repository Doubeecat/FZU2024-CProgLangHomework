#include <stdio.h>

int main() {
    int x;scanf("%d",&x);
    printf("%d\n",(x < 0 ? -x : x));
    return 0;
}