1.Implementing the 4 types data format input and 3-values of printing unformatted?

#include<stdio.h>                     //Including the standard inpit and output using preprocessor
#include<string.h>			//to include the string header file to pring string variables
int a;					//declaring the integer value
float b;				//declaring the flaot variable
char name[50];
int main(){
printf("enter a value: ");
scanf("%d",&a);				//reading the integer variable from user
printf("enter a value");
scanf("%f",&b);				//reading the flaot variable from user
printf("%d\n%f\n",a,b);			//printing the integer and float values
printf("enter a name:");
gets (name);				//to get name from user using unformatted 
printf("Name is:");
puts(name);				//it will prints the name using unformatted
}
