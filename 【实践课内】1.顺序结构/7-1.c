#include <stdio.h>

int main() {
    int f;
    scanf("%d",&f);
    int c = 5 * (f - 32) / 9 ;
    printf("Celsius = %d\n",c);
    return 0;
}