#include <stdio.h>
#include <math.h>

int min(int x,int y) {
    return x < y ? x : y;
}

int main() {
    int n;scanf("%d",&n);
    int minn = 0x3f3f3f3f;
    for (int i = 1;i <= n;++i) {
        int x;scanf("%d",&x);
        minn = min(minn,x);
    }
    printf("%d\n",minn);
}