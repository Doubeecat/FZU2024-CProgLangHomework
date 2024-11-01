#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i, n;
    for (n = 1; n <= N; n++)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d*%d=%-4d", i, n, n*i);
        }
        printf("\n");
    }
    return 0;
}
