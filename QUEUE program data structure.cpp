#include<stdio.h>
#include<stdlib.h>
#define size 5

int f=-1,r=-1,que[size];
void enqueue()
{
		int n;
		printf("enter the element =");
		scanf("%d",&n);
		if(r==size-1)
		printf("the queue is full");
		else
		{
			if(f==-1 && r==-1)
			{
				f=r=0;
			}
			else
			r=r+1;
			que[r]=n;
		}
}
	void dequeue()
	{
		int n;
		if(f==-1 && r==-1)
		printf("queue is empty");
		else
		{
			n=que[r];
			if(f==r)
			{
				f=-1;
				r=-1;
			}
			else
			f=f+1;
			printf("the deleted element is =%d",n);
		}
	}
     void display()
	{
		int i;
		if(f==-1 && r==-1)
		printf("queueempty");
		else
		{
			for(i=f;i<=r;i++)
			{
				printf("the queue is %d\t\n",que[i]);
			}
		}
	}

int main()
{
	int choice;
	do
	{
		printf("\nMain menu \n");
		printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("enter numbers from 1 to 5");
		}
	}while(choice>0 && choice<=4);
	return 0;		
}
