#include <stdio.h>
#include <string.h>

char s[10000];
int n;

int main() {
    scanf("%s",s+1);
    n = strlen(s+1);
    int ans = 0;
    for (int i = 1;i <= n;++i) {
        ans += s[i] - '0';
    }
    printf("%d\n",ans);
}