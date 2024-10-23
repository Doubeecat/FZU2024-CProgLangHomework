#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int typ;
double a[10];

int main() {
    scanf("%d\n",&typ);
    for (int i = 0;i < 3;++i) scanf("%lf ",&a[i]); 
    if (typ) {
        for (int i = 0;i < 3;++i) {
            for (int j = i + 1;j < 3;++j) {
                if (a[i] > a[j]) {
                    a[i] += a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }
    } else {
        for (int i = 0;i < 3;++i) {
            for (int j = i + 1;j < 3;++j) {
                if (a[i] < a[j]) {
                    a[i] += a[j];
                    a[j] = a[i] - a[j];
                    a[i] = a[i] - a[j];
                }
            }
        }

    }
    for (int i = 0;i < 3;++i) printf("%.2lf ",a[i]);
    return 0;
}