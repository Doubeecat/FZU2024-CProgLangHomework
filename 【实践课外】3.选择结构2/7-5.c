#include <stdio.h>

int main() {
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&x3,&y3);
    int x4 = x2 - x1,y4 = y2 - y1;
    int x5 = x3 - x1,y5 = y3 - y1;
    if (x4 * x5 + y4 * y5) puts("no");
    else puts("yes");
}
