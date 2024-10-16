#include <stdio.h>

int main() {
    int y,m,d;
    scanf("%d-%d-%d\n",&m,&d,&y);
    printf("%d-%02d-%02d\n",y,m,d);
    return 0;
}