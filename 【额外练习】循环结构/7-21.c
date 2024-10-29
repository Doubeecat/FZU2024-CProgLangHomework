#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n>m)
	{
		int t=m;
		m=n;
		n=t;
	}
	int count=0;
	for(int i=n;i<=m;i++)
	{
		int c=i%10;
		int b=i/10%10;
		int a=i/100;
	    if(c*c*c+a*a*a+b*b*b==i)
	    count++;
	}
	printf("%d",count);
}
