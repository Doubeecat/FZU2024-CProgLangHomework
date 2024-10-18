#include <stdio.h>

int main() {
    int x;scanf("%d",&x);
    if (x < 0 || x > 100) puts("Data Error");
    else if (x < 60) puts("No Pass");
    else puts("Pass");
    return 0;
}