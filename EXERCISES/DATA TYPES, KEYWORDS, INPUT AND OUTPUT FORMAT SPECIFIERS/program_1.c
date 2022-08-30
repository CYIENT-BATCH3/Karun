1.Write a program to input data from user using scanf() and display various format specifiers using printf(). 

#include <stdio.h>			//including standard input and output libraries using preprossecive directives

int main()       
{
   int a;				//Declaring the integer variable
   char b;				//Declaring the charcter variable
   float c;				//Declaring the float variable
   printf("enter a value");
   scanf("%d",&a);			//reading the integer variable from user
   printf("enter a character");
   scanf(" %c",&b);			//reading the charcter variable from user
   printf("enter a value");
   scanf("%f",&c);			//reading the float variable from user
   printf("%d\n%c\n%f\n",a,b,c);	//printing all the variables using single printf
   
}
