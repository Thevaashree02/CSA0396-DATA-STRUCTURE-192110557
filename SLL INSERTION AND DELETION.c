#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head = NULL,*p,*t,*newnode;
void create_SLL()
{
	int ele,i,n;
	printf("enter the no of elements in the list:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
    void SLL_insert_at_begin()
    {
    	int ele;
    	printf("enter the element:");
    	scanf("%d",&ele);
    	newnode=(struct node*)malloc(sizeof(struct node));
    	newnode->data=ele;
    	newnode->next=NULL;
    	p=head;
    	head=newnode;
    	newnode->next=p;
    	p=newnode;
	}
	void SLL_insert_at_end()
	{
		int ele;
    	printf("enter the element:");
    	scanf("%d",&ele);
    	newnode=(struct node*)malloc(sizeof(struct node));
    	newnode->data=ele;
    	newnode->next=NULL;
    	for(p=head;p->next!=NULL;p=p->next);
    	p->next=newnode;
    	p=newnode;
	}
	void SLL_insert_at_any_position()
	{
		int ele,pos,i;
    	printf("enter the element:");
    	scanf("%d",&ele);
    	printf("enter the position:");
    	scanf("%d",&pos);
    	newnode=(struct node*)malloc(sizeof(struct node));
    	newnode->data=ele;
    	newnode->next=NULL;
    	for(p=head,i=1;i<pos;p=p->next,i++)
    	t=p;
    	t->next=newnode;
    	newnode->next=p;
    	p=newnode;
	}
    void SLL_delete_at_begin()
    {
    	p=head;
    	head=p->next;
    	free(p);
    	p=head;
	}
	void SLL_delete_at_end()
	{
		for(p=head;p->next!=NULL;p=p->next)
		t=p;
		t->next=NULL;
		free(p);
		p=t;
	}
	void SLL_delete_at_any_position()
	{
		int i,pos;
		printf("enter the position:");
		scanf("%d",&pos);
		for(p=head,i=1;i<pos;p=p->next,i++)
		t=p;
		t->next=p->next;
		free(p);
		p=t;
	}
    void display_SLL()
	{
		if(head==NULL)
		printf("SLL is empty");
		else
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
	int main()
	{
		int cho;
		do{
			printf("\n*******MENU********\n");
			printf(" 1.create\n 2. display\n 3. insert at begin\n 4.insert at end\n 5.insert at any position\n 6.delete at begin\n 7.delete at end\n 8.delete at any position\n 9.exit\n");
			printf("enter the choice:");
			scanf("%d",&cho);
			switch(cho)
			{
				case 1:create_SLL();
				break;
				case 2:display_SLL();
				break;
				case 3:SLL_insert_at_begin();
				break;
				case 4:SLL_insert_at_end();
				break;
				case 5:SLL_insert_at_any_position();
				break;
				case 6:SLL_delete_at_begin();
				break;
				case 7:SLL_delete_at_end();
				break;
				case 8:SLL_delete_at_any_position();
				break;
				case 9:exit(0);
				default:printf("       ");
			}
		}
		while(cho>0&&cho<=9);
	}

