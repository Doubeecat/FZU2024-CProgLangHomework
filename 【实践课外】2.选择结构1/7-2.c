#include <stdio.h>
#include <math.h>

double min(double a,double b) {
    return a < b ? a : b;
}

int main() {
    double n;
    scanf("%lf",&n);
    double ans = 0;
    if (n <= 36000){ ans += min(n,36000) * 0.03;}
    else {
        ans += 36000 * 0.03;
        if (n <= 144000)ans += (min(144000,n) - 36000) * 0.1;
        else {
            ans += (144000 - 36000) * 0.1;
            if (n <= 300000)ans += (min(300000,n) - 144000) * 0.2;
            else {
                ans += (300000 - 144000) * 0.2;
                if (n <= 420000) ans += (min(420000,n) - 300000) * 0.25;
                else {
                    ans += (min(420000,n) - 300000) * 0.25;
                    if (n <= 660000) ans += (min(660000,n) - 420000) * 0.3;
                    else {
                        ans += (min(660000,n) - 420000) * 0.3;
                        if (n <= 960000) ans += (min(960000,n) - 660000) * 0.35;
                        else {
                            ans += (min(960000,n) - 660000) * 0.35;
                            ans += (n - 960000) * 0.45;
                        }
                    }
                }
            }
        }
    } 
    printf("%.2lf\n",ans);
}