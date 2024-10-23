#include <stdio.h>

int main() {
    double o,h,l,c;scanf("%lf %lf %lf %lf\n",&o,&h,&l,&c);
    int flag = 0;
    int typ1 = 0;
    if (c < o) typ1 = 1;
    else if (c > o) typ1 = 2;
    else typ1 = 3;
    int typ2 = 0;
    if (l < o && l < c) typ2 += 1;
    if (h > o && h > c) typ2 += 2;
    
    if (typ1 == 1) printf("BW-Solid");
    else if (typ1 == 2) printf("R-Hollow");
    else printf("R-Cross");
    if (typ2) {
        printf(" with ");
        if (typ2 == 1) printf("Lower Shadow");
        else if (typ2 == 2) printf("Upper Shadow");
        else printf("Lower Shadow and Upper Shadow");
    }
}