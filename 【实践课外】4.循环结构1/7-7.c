#include <stdio.h>
#include <stdbool.h>

bool judge(int x) {
    if (x % 4 == 0) {
        if (x % 100 == 0) {
            if (x % 400 == 0) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}

int main() {
    long long int r;scanf("%d",&r);
    if (r <= 2000 || r >= 2100) {
        puts("Invalid year!");
        return 0;
    }
    bool flag = 0;
    for (int i = 2001;i <= r;++i) {
        if (judge(i)) {
            flag = 1;
            printf("%d\n",i);
        }
    }
    if (!flag) puts("None");
}