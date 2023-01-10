#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	printf("enter the number:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
