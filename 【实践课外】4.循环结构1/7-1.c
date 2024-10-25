#include <stdio.h>

int gcd(int x,int y) {
    if (!y) return x;
    return gcd(y,x % y);
}

int lcm(int x,int y) {
    return x / gcd(x,y) * y;
}

int main() {
    int x,y;scanf("%d %d\n",&x,&y);
    printf("%d %d\n",gcd(x,y),lcm(x,y));
}