#include<stdio.h>
int main()
{
  double n,i,j;
  double sum;
  while(scanf("%lf",&n),n)
  {
    sum=0;
    for(i=1;i<=n;i++)
                    sum=sum+n/i;
    for(i=2;i<=n;i++)
                    sum-=((i-1)/i);
              sum=2*sum-n;
              printf("%.2lf\n",sum);
  }
  return 0;
}