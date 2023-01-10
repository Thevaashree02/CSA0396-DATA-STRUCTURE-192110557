#include<stdio.h>
int main()
{
	int n,i,A[50],c_E=0,c_O=0;
	printf("enter the number of elements in your array:");
	scanf("%d",&n);
	printf("Enter the elements of your array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		if(A[i]%2==0)
		c_E++;
		else
		c_O++;
	}
	printf("\n Even count=%d\n",c_E);
	printf("\n Odd count=%d\n",c_O);
	return 0;
}
