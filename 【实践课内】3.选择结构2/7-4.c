#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int y,m,d;
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
const int d1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
const int d2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int main() {
    scanf("%d/%d/%d",&y,&m,&d);
    bool flag = 0;
    if (!judge(y)) {
        if (m < 1 || m > 12) {
            flag = 1;
        } else {
            if (d < 1 || d > d1[m]) {
                flag = 1;
            }
        }
    } else {

        if (m < 1 || m > 12) {
            flag = 1;
        } else {
            if (d < 1 || d > d2[m]) {
                flag = 1;
            }
        }
    }
    if (flag) puts("No");
    else puts("Yes");
}