//STACK IMPLEMENTATION USING ARRAYS
#include <stdio.h>
#include <stdlib.h>

#define max 5
int top=-1;
int stack[max]; 

//PUSH FUNCTION
void push ()
{
	int item;   
	if (top == (max-1))
	printf("\nOverflow\n");
   	else   
	{
	printf("Enter the item: \n");
	scanf("%d",&item);
	stack [++top] = item;
	}
}
 
//POP FUNCTION
void pop ()
{  
	if (top == -1)   
	printf("\nUnderflow\n");
   	else
	printf("Element deleted is:\n%d",stack[top--]); 
}
 
//FUNCTION TO DISPLAY STACK

void display ()
{   
    	int i;
	printf ("\nThe Stack is:\n");
    	if (top == -1)
	printf ("empty");
	else
    	{   
	for (i=top; i>=0; i--)
	printf ("%d\n",stack[i]);
    	}
}
 
//MAIN PROGRAM
void main()
{  
    	int ch;

    	printf ("\nMAIN MENU");
    	printf ("\n1.PUSH in the Stack");
    	printf ("\n2.POP from the Stack");
    	printf ("\n3.Display Stack");
    	printf ("\n4.Exit");
	
	while(1)
	{
    	printf ("\nEnter Your Choice: ");
    	scanf  ("%d", &ch);
       	
	switch (ch)    
       {
  	case 1:
	push ();
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
	printf("Invalid Choice");
	}   
    	}
}


