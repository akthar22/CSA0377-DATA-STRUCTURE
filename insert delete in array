#include<stdio.h>
#include<stdlib.h>
#define size 100
int a[size],n=6;
void create()
{
	int i;
	printf("enter the size");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void insert()
{
	int i,p,e;
	printf("enter the position & element");
	scanf("%d%d",&p,&e);
	for(i=n;i>=p;i--)
	a[i]=a[i-1];
	a[p]=e;
}
void del()
{
	int i,p;
	printf("enter the position");
	scanf("%d",&p);
	for(i=p;i<n;i++)
	a[i]=a[i+1];
}
void display()
{
	int i,ch;
	do{
		
		printf("\nMenu\n1.After Create\n2.After Insertion\n3.After Deletion");
		printf("Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("the elements are\n");
				for(i=0;i<n;i++)
				printf("%d\t",a[i]);
				break;
			
			case 2:
				printf("the elements are\n");
				for(i=0;i<n+1;i++)
				printf("%d\t",a[i]);
				break;
			case 3:
				printf("the elements are\n");
				for(i=0;i<n-1;i++)
				printf("%d\t",a[i]);
				break;
			default: printf("Enter 1,2,3");
		}
	}while(ch>0 && ch<=3);
}
int main()
{
	int choice;
	do
	{
		printf("main menu\n");
		printf("\n1.create\n2.insert\n3.delete\n4.display\n5.exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				del();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("enter numbers from 1 to 5");
		}
	}while (choice>0 && choice<=5);
	return 0;
}
