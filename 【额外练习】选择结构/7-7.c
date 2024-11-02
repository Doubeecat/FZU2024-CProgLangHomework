#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    int a = 0;
    scanf("%lf %lf", &x, &y);
    if (pow(x - 2.0, 2) + pow(y - 2.0, 2) <= pow(1, 2)) 
    {
        a = 1;
    } 
    else if (pow(x + 2.0, 2) + pow(y - 2.0, 2) <= pow(1, 2)) 
    {
        a = 1;
    } 
    else if (pow(x + 2.0, 2) + pow(y + 2.0, 2) <= pow(1, 2)) 
    {
        a = 1;
    }
    else if (pow(x - 2.0, 2) + pow(y + 2.0, 2) <= pow(1, 2)) 
    {
        a = 1;
    }
    if (a == 1)
        printf("10");
    else
        printf("0");
}