#include<stdio.h>
#include<stdlib.h>
void Array_Ins()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the element to be inserted:");
	scanf("%d",&ele);
	printf("enter the position of the element to be inserted:");
	scanf("%d",&pos);
	for(i=n;i>pos;i--)
    {
    	A[i]=A[i-1];
	}
	A[pos]=ele;
	for(i=0;i<=n;i++)
	printf("%d\t",A[i]);
}
void Array_Delete()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the position of the element to be deleted:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	A[i]=A[i+1];
	for(i=0;i<n-1;i++)
	printf("%d\t",A[i]);
}
void Array_Display()
{
	int ele,pos,i,A[100],n;
	printf("enter the array size:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("your array...\n");
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
}
int main()
{
	int cho;
	do{
		printf("\n ****MENU**** \n");
		printf("\n 1. insertion\n 2. deletion\n 3. display\n");
		printf("enter the choice:");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:Array_Ins();
			break;
			case 2:Array_Delete();
			break;
			case 3:Array_Display();
			break;
			case 4:exit(0);
			default:
			printf("\n enter the choice between 1 to 4");
		}
	}
	while(cho>0&&cho<=4);
}
