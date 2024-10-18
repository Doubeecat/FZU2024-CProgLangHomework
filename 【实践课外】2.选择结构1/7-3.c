#include <stdio.h>
const int m1[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
const int m2[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};

int flag = 0;
int main() {
    int y,m,d;
    scanf("%d/%d/%d\n",&y,&m,&d);
    if ((y % 4 == 0 && y % 100) || y % 400 == 0) {
        flag = 1;
    }
        int cnt = 0;
    if (flag) {
        for (int i = 1;i < m;++i) cnt += m2[i];
        cnt += d;
    } else {
        for (int i = 1;i < m;++i) cnt += m1[i];
        cnt += d;

    }
    printf("%d\n",cnt);
}