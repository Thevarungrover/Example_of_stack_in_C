#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5 // setting constant value of MAXSIZE to 5

struct stack //structure definition for stack
{
	int stk[MAXSIZE];
	int top;
};

typedef struct stack STACK;
STACK s;

// Function declaration/prototype

void push(void);
int pop(void);
void display(void);

void main() // Main function
{
	int choice;
	int option;
	
	s.top = -1; // this gives that stack is empty 
	
	while(option)
	{
		// menu to be shown after every step
		printf("STACK OPERATION\n"); 
		printf("---------------------------------\n");
		printf("1--> PUSH\n");
		printf("2--> POP\n");
		printf("3--> DISPLAY\n");
		printf("4--> EXIT\n");
		printf("---------------------------------\n");
		
		printf("Enter your choice : "); 
		scanf("%d",&choice); //getting choice of user selecting from menu
		
		switch(choice) // case to do respective works according to the choice 
		{
			case 1 :push(); // function call
			break;
			case 2 :pop(); // function call
			break;
			case 3 :display(); // function call
			break;
			case 4 :return; // exit case
			break;
			default : printf("	INVALID CHOICE....PLEASE SELECT FROM 1 - 4\n\n");
		}
		
		fflush(stdin);
		if(choice ==1 || choice == 2 || choice == 3 || choice == 4)
		{
		printf("Do you want to continue (Type '1' for Yes or '2' for No) ?\n");
		}
			scanf("%d",&option);
	}
}

// Function to add element
void push()
{
	int num;
	if(s.top == (MAXSIZE -1)) // Condition for checking that stack has space to add element
	{
		printf("Stack is full\n");
		return;
	}
	else
	{
		printf("Enter the element to be pushed :\n ");
		scanf("%d",&num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
	}
	return;
}

// Function to delete an element
int pop()
{
	int num;
	if(s.top == -1) // condition for checking that stack contains anything or not
	{
		printf("Stack is empty\n");
		return(s.top);
	}
	else
	{
		num = s.stk[s.top];
		printf("Pooped element is %d\n",s.stk[s.top]);
		s.top = s.top - 1;
	}
	return (num);
}

//Function to display status of stack
void display()
{
	int i;
	if(s.top == -1)  // condition for checking that stack contains anything or not
	{
		printf("Stack is empty");
		return;
	}
	else
	{
		printf("\nThe status of the stack is\n");
		for(i = s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]); // printing elements in stack
		}
	}
	printf("\n");
}
