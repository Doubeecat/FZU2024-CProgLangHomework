#include <stdio.h>

int a,b;
char c;

int main() {
    scanf("%d %d %c",&a,&b,&c);
    double base = 0,disc = 0;
    if (b == 90) base = 6.95;
    if (b == 93) base = 7.44;
    if (b == 97) base = 7.93;
    if (c == 'm') disc = 0.95;
    if (c == 'e') disc = 0.97;
    double ans = (double)a*base*disc;
    printf("%.2lf\n",ans);
    return 0;
}