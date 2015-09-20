//Queue Implementation
#include<stdio.h>
#include<stdlib.h>
#define size 10

int front=-1,rear=-1,queue[size];

void insert()
{
	int num;
	if(rear== size-1)
	printf("\nOverflow");
	else
	{
	if(front==-1)
	front=0;

	printf("\nEnter the element:\n");
	scanf("%d",&num);
	rear=rear+1;	
	queue[rear]=num;
	
	}
}

void delete()
{
	if(front==-1 || front > rear)
	printf("Underflow");
	else
	{
	printf("Element deleted is:%d\n",queue[front]);
	front=front+1;
	}
}

void display()
{
	int i;
	if(front==-1)
	printf("\nQueue is empty.");
	else
	{
	printf("Queue elements are:\n");
	for(i=front;i<=rear;i++)
		{
		 printf("%d\n",queue[i]);
		}
	}
}



main()
{
	int ch;
	printf("\nQueue Operation\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");

	while(1)
	{
	printf("Enter your choice: \n");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:
	insert();
	break;
	
	case 2:
	delete();
	break;
	
	case 3:
	display();
	break;
	
	case 4:
	exit(1);
	
	default:
	printf("Wrong Choice");
	}
	}
	
}
