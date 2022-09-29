#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}
*head=NULL,*p,*t,*newnode;
void create()
{
	int x,n,i;
	printf("enter the n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the value");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if (head==NULL)
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
void display()
{
	if (head==NULL)
	printf("empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
int main()
{
	int choice;
	do
	{
		printf("\nMain menu \n");
		printf("\n1.create\n2.display\n3.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("enter numbers from 1 to 3");
		}
	}while(choice>0 && choice<=3);
	return 0;		
}
