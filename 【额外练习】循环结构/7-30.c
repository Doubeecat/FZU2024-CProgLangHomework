/*
Undo the destiny.
*/
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define ll long long

int hanshu(int n,int x)
{
	int sum=0;	
	while(n>0)
	{
		int t=n%x;
		sum+=t;
		n/=x;
	}
	return sum;
}



int main()
{
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int c=hanshu(n,a);
	int d=hanshu(n,b);
	if(c==d)
	printf("%d is a perfect number.",n);
	else
	printf("%d is not a perfect number.",n);
}
