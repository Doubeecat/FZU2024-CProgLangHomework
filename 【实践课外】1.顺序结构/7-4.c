#include <stdio.h>

int dig[5],n;

int main() {
    scanf("%d",&n);
    int pos = 0;
    while (n) {
        dig[++pos] = n % 10;
        n /= 10;
    }
    for (int i = 1;i <= 4;++i) printf("%d",dig[i]);
}