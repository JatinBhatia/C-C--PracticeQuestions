//Implement Stack using Link List
#include<stdio.h>
#include<stdlib.h>

struct myStack
{
	int data;
	struct myStack *next;
}*start;



void pop()
{
	struct myStack *val;
	val=start;
	if(val!=NULL)
	{
	printf("The element poped is:%d\n",val->data);
	start=start->next;
	free(val);
	}
	else
	printf("Stack empty");
}

void push()
{
	int val;
	printf("\nEnter the value:\n");
	scanf("%d",&val);

	struct myStack *temp;
	temp=NULL;
	temp=(struct myStack*)malloc(sizeof(struct myStack));
	temp->data= val;
	temp->next= NULL;
	
	if(start==NULL)
	{start=temp;
//	start->next=NULL;
	}
	else
	{
	temp->next=start;
	start=temp;
	}
	
	

	
}

void display()
{
	struct myStack *var=start;
	if(var!=NULL)
	{
	printf("The elements are: \n");
	while(var!=NULL)
	{
	printf("\n%d",var->data);
	var=var->next;
	}
	}
	else
	printf("The stack is empty");

}


main()
{
	int ch;
//	struct myStack *start;
	start= NULL;	
	while(1)
	{
		printf("\nStack Operation\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
		case 1:
		push();
		break;
		
		case 2:
		pop();
		break;

		case 3:
		display();
		break;

		case 4:
		exit(1);

		default:
		printf("Wrong choice");
		}
	}
}
