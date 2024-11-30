#include <stdio.h>

#include <math.h>

int main()

{

float a,b,c;

double result;

double s1,s2;

double real,imag;

scanf("%f %f %f",&a,&b,&c);

if(a==0&&b==0&&c!=0)

{

printf("No solution");

}

else if(a==0&&b==0&&c==0)

{

printf("No solution");

}

else if(b*b-4*a*c==0)

{

result=-b*1.0/(2*a);

printf("%.2f\n",result);

}

else if(b*b-4*a*c>0&&a!=0)

{

s1=((-b)+sqrt(b*b-4*a*c))/(2.0*a);

s2=((-b)-sqrt(b*b-4*a*c))/(2.0*a);

if (s1 > s2) {
    float s3 = s2;
    s2 = s1;s1 = s3;
}

printf("%.2f %.2f",s1,s2);

}

else if(a==0&&b!=0&&c!=0)

printf("%.2f\n",(-c*1.0)/b);

else if(b*b-4*a*c<0)

{


printf("No solution");

}

return 0;

}