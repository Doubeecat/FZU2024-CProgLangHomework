#include <stdio.h>

int main() {
    int n, a[11];
    scanf("%d", &n);

    for (int i = 1; i <= n; i ++) scanf("%d", &a[i]);

    for (int i = 1; i <= n; i ++) {
        int ith = i;
        for (int j = i + 1; j <= n; j ++)
            if (a[j] > a[ith]) ith = j;
        
        int t = a[ith]; a[ith] = a[i]; a[i] = t;
    }

    for (int i = 1; i <= n; i ++) {
        printf("%d", a[i]);
        if (i ^ n) printf(" ");
    }

    return 0;
}