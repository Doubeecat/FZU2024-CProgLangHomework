#include <stdio.h>

int main() {
    int h;scanf("%d",&h);
    double val = (double)(h-100) * 0.9 * 2;
    printf("%.1lf\n",val);
    return 0;
}