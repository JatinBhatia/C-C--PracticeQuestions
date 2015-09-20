//Implement Queue using Link List
#include<stdio.h>
#include<stdlib.h>

struct myQueue
{
	int data;
	struct myQueue *next;
}*front,*rear;



void delete()
{
	struct myQueue *val;
	val=rear;
	if(val==rear)
	{
	rear=rear->next;
	free(val);
	}
	else
	printf("Queue empty");
}

void insert()
{
	int val;
	printf("\nEnter the value:\n");
	scanf("%d",&val);

	struct myQueue *temp;
	temp=NULL;
	temp=(struct myQueue*)malloc(sizeof(struct myQueue));
	temp->data= val;
	
	if(front==NULL)
	{front=temp;
	front->next=NULL;
	rear=front;
	}
	else
	{
	rear->next=temp;
	rear=temp;
	/*front->next=temp;
	front=temp;
	front->next=NULL;
	*/
	}
	
	

	
}

void display()
{
	struct myQueue *var=rear;
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
	printf("The Queue is empty");

}


main()
{
	int ch;
	front= NULL;
	rear=NULL;	
	while(1)
	{
		printf("\nQueue Operation\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice: ");
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
		printf("Wrong choice");
		}
	}
}
