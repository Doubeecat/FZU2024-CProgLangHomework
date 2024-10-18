#include <stdio.h>
#include <math.h>

double a,b,c;
double sgn(double x) {
    return x == -0.0 ? -x : x;
}

int main() {
    scanf("%lf %lf %lf\n",&a,&b,&c);
    if (a == 0 && b == 0) {
        if (c == 0) {
            puts("Zero Equation");
        } else {
            puts("Not An Equation");
        }
    } else if (a == 0) {
        double x = - c / b;
        printf("%.2lf\n",sgn(x));
    } else {
        double del = b * b - 4 * a * c;
        if (del > 0) {
            double x1 = (-b+sqrt(del))/(a*2);
            double x2 = (-b-sqrt(del))/(a*2);
            printf("%.2lf\n%.2lf\n",sgn(x1),sgn(x2));
        } else if (del == 0) {
            double x = - b / (2*a);
            printf("%.2lf\n",sgn(x));
        } else {
            double x1 = - b / (2*a);
            double x2 = sqrt(-del)/(2*a);
            printf("%.2lf+%.2lfi\n",sgn(x1),sgn(x2));
            printf("%.2lf-%.2lfi\n",sgn(x1),sgn(x2));

        }
    }
    return 0;
}