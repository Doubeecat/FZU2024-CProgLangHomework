#include <stdio.h>
#include <math.h>
const long double eps = 1e-15;
struct poi {
    long double x,y;
}p[3];

int sgn(long double x) {
    if (fabs(x) < eps) return 0;
    return x > 0 ? 1 : -1;
}
 
long double cross(struct poi a,struct poi b) {
    return a.x * b.y - a.y * b.x; 
}
long double mul(struct poi a,struct poi b) {
    return a.x * b.x + a.y * b.y; 
}

long double len(struct poi a) {
    return sqrt(mul(a,a));
}

struct poi del(struct poi a,struct poi b) {
    struct poi c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

int judge(struct poi a,struct poi b,struct poi c) {
    return !sgn(cross(del(b,a),del(c,b)));
}
long double area(struct poi a,struct poi b,struct poi c) {
    return (long double)fabs(cross(del(b,a),del(c,a))) / 2.0;
}

int main() {
    scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&p[0].x,&p[0].y,&p[1].x,&p[1].y,&p[2].x,&p[2].y);
    if (!judge(p[0],p[1],p[2])) {
        long double s = area(p[0],p[1],p[2]);
        long double d = len(del(p[0],p[1])) + len(del(p[0],p[2])) + len(del(p[1],p[2]));
        printf("L = %.2Lf, A = %.2Lf\n",d,s);
    } else {
        puts("Impossible");
    }
    return 0;
}