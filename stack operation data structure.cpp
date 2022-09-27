#include<stdio.h>
#include<stdlib.h>
#define size 5

int top=-1,stk[size];

void push()
{
		int n;
		printf("enter the element =");
		scanf("%d",&n);
		if(top==size-1)
		printf("the stack is full");
		else
		{
			top=top+1;
			stk[top]=n;
		}
}
	void pop()
	{
		int n;
		if(top==-1)
		printf("stack is empty");
		else
		{
			n=stk[top];
			top=top-1;
			printf("the deleted element value = %d",n);
		}
	}
	void peek()
	{
		if (top==-1)
		printf("stack is empty");
		else
		printf("the top element is : %d",stk[top]);
	}

	void display()
	{
		int i;
		if(top==-1)
		printf("empty");
		else
		{
			for(i=top;i>=0;i--)
			{
				printf("the stack is %d\n",stk[i]);
			}
		}
	}

int main()
{
	int choice;
	do
	{
		printf("\nMain menu \n");
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
		}
	}while(choice>0 && choice<=5);
	return 0;		
}
