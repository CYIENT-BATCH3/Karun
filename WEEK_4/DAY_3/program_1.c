//WAP to perform arithmetic operations using functions and function defintion must be in header file and including header you need to perform arthematic operations.
#include<stdio.h>
#include "def.h"
int main()
{
	setbuf(stdout,NULL);
	char ch;
	puts("enter a key perform particular arithmetic operation");
	puts("+ for Addition || - for Subtraction || * for division || / for division");
	scanf("%c",&ch);		//input the key for performing particular arithmetic operation
	calculator(ch);			//call calculator() with ch as argument
}


//decl.h
void calculator(char );			//declare a calculator with chat argument and with no return type
int sum (int ,int );			//sum function declartion
int sub (int ,int );			//sub function declartion
int mul (int ,int );			//mul function declartion
float divs(int ,int);			//divs declaration

//def.h
#include "decl.h"					//include declarations using def.h
void calculator(char ch)			//define calculator()
{
	int a,b;						//declare two variables to input values
	switch(ch)						//define a switch with ch as choice/expression
	{
	case '+':
	{
		puts("enter two integers:\n");
			scanf("%d %d",&a,&b);
			printf("Addition of %d and %d is %d",a,b,sum(a,b));
			break;
	}
	case '-':
	{
			puts("enter two integers:\n");
				scanf("%d %d",&a,&b);
				printf("Subtraction of %d and %d is %d",a,b,sub(a,b));
				break;
	}
	case '*':
	{
			puts("enter two integers:\n");
				scanf("%d %d",&a,&b);
				printf("Multiplication of %d and %d is %d",a,b,mul(a,b));
				break;
	}
	case '/':
	{
			puts("enter two integers:\n");
				scanf("%d %d",&a,&b);
				printf("Division of %d and %d is %f",a,b,divs(a,b));
				break;
	}
	default:
		printf("Invalid operation are attempted");
	}
}

int sum(int n1,int n2)				//define sum() with int return type and 2 int variables as arguments which returns sum value of it.
{
	return (n1+n2);
}
int sub(int n1,int n2)			//define sub() with int return type and 2 int variables as arguments which returns subtraction value of it.
{
	return n1-n2;
}

int mul(int n1,int n2)		//define mul() with int return type and 2 int variables as arguments which returns multiplication value of it.
{
	return n1*n2;
}
float divs (int n1,int n2)	{		//define mul() with int return type and 2 int variables as arguments which returns division value of it.
	  return (n1/n2);
	}
Footer
