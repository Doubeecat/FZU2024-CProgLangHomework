#include <stdio.h>
int a,b;
char opt;

int main() {
    scanf("%d %c %d\n",&a,&opt,&b);
    int ans = 0;
    if (opt == '/') {
        if (b == 0) {
            puts("Error");
            return 0;
        }
        double fans = (double) a / b;
        printf("%.2lf\n",fans);
        return 0;
    }
    if (opt == '+') ans = a + b;
    else if (opt == '-') ans = a-b;
    else if (opt == '*') ans = a * b;
    else if (opt == '%') {
        if (b == 0) {
            puts("Error");
            return 0;
        }
        ans = a % b;
    }
    else {puts("Error");return 0;}
    printf("%d\n",ans);
    return 0;
}