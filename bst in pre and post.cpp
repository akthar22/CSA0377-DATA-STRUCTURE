#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left,*right;
}
*root=NULL,*newnode;

struct node* create(struct node*root,int value)
{
	if(root==NULL)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->left=NULL;
		newnode->right=NULL;
		return(newnode);
	}
	else if(value <root->data)
	root->left=create(root->left,value);
	else if(value >root->data)
	root->right=create(root->right,value);
	return(root);
}


void inorder(struct node *root)
{
	
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}
int main()
{
	int choice,ele;
	do
	{
		printf("\nMain menu \n");
		printf("\n1.create\n2.inorder\n3.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter the element :");
				scanf("%d",&ele);
				root=create(root,ele);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				exit(0);
			default:
				printf("enter numbers from 1 to 3");
		}
	}while(choice>0 && choice<=3);
	return 0;
}
