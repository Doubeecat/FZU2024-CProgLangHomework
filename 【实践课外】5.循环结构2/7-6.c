
#include <stdio.h>
int main () {
    int x, count = 0;
    scanf("%d", &x);
    for ( int k = x / 5; k > 0; k-- )
        for ( int i = x / 2; i > 0; i-- )
            for ( int j = x; j > 0; j-- )
            if ( k * 5 + i * 2 + j == x) {
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", k, i, j, k + j + i);
                count++;
            }
    printf("count = %d",count);
    return 0;
}