#include <stdio.h>

int main() {
    int h,m,t;
    scanf("%d:%d:%d\n",&h,&m,&t);

    int nowt = t + m * 60 + h * 3600;
    int rt = 19 * 3600,tt = 7 * 3600;
    if (nowt <= tt) nowt += 24 * 3600;
    if (nowt > rt) {
        int del = nowt - rt;
        h = del / 3600,m = del % 3600 / 60,t = del % 60;
        printf("+%02d:%02d:%02d\n",h,m,t);
    } else {
        int del = rt-nowt;
        h = del / 3600,m = del % 3600 / 60,t = del % 60;
        printf("-%02d:%02d:%02d\n",h,m,t);

    }
} 