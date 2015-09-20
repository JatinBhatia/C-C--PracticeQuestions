#include<stdio.h>
struct myStack
{
	int a[10];
	int top;
}ms;

int check1()
{
	if(ms.top==-1)
	return 1;
}

int check2()
{
	if(ms.top==9)
	return 1;
}

void push()
{
	int num;
	printf("Enter the no: \n");
	scanf("%d\n",&num);
	//if(check2()==1)
	//printf("Overflow");
	//else
		{ms.top++;
		ms.a[ms.top]= num;
		}
}

void pop()
{
	int item;
	if(check1()==1)
	printf("Underflow");
	else
	{
	item=ms.a[ms.top];
	ms.top--;
	}
}

void display()
{
	int i;
	//if(check1()==1)
	//printf("\n Stack Empty\n");
	//else
	{
	for(i=0;i<ms.top;i++)
	printf("\n%d",ms.a[i]);
	}
	
}


main()
{
	int choice;
	ms.top= -1 ;
	printf("\nStack Operations \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	scanf("%d",&choice);
	if(choice==1)
	push();
	else if(choice==2)
	pop();
	else if(choice==3)
	display();
	else
	printf("Invalid choice");
		

}


