4.WAP to find given number is even or odd?

#include<stdio.h>		//including the standard input and output using preprocessives
int main()			
{
int n;				//declaring the variable i.e. n
printf("enter a value");
scanf("%d",&n);			//reading the variable
if(n%2==0)			//condition for checking given number is even or odd
printf("given number is even");	//if it true prints even
else
printf("given number is odd");	//if it false prints odd
}
