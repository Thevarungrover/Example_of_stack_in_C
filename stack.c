#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5

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
	int option = 1;
	
	s.top = -1;
	
	printf("STACK OPERATION\n");
	while(option)
	{
		printf("---------------------------------\n");
		printf("1--> PUSH\n");
		printf("2--> POP\n");
		printf("3--> DISPLAY\n");
		printf("4--> EXIT\n");
		printf("---------------------------------\n");
		
		printf("Enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 :push();
			break;
			case 2 :pop();
			break;
			case 3 :display();
			break;
			case 4 :return;
		}
		
		fflush(stdin);
		printf("Do you want to continue (Type '1' for Yes or '2' for No) ?\n");
		scanf("%d",&option);
	}
}

// Function to add element
void push()
{
	int num;
	if(s.top == (MAXSIZE -1))
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
	if(s.top == -1)
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
	if(s.top == -1)
	{
		printf("Stack is empty");
		return;
	}
	else
	{
		printf("\nThe status of the stack is\n");
		for(i = s.top;i>=0;i--)
		{
			printf("%d\n",s.stk[i]);
		}
	}
	printf("\n");
}
