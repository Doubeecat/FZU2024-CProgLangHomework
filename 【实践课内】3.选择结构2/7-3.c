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

bool judge2(int x) {
    bool flag = 0;
    while (x) {
        flag |= (x % 10 == 4);
        x /= 10;
    }
    return flag;
}

int main() {
    int x;scanf("%d",&x);
    if (judge(x)) {
        if (judge2(x)) puts("panta!");
        else puts("1"); 
    } else {
        puts("0");
    }
}