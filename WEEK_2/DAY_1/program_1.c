.WAP to find student grading using if,elseif and else conditions?

#include <stdio.h>			//including stanadard input and output using preprocessive directives
int main()
{
int marks;				//declaring integer variable with marks
printf("enter marks");
scanf("%d",&marks);			//reading the variable
if((marks>=90)&&(marks<=100))		//using if conditon checking that if marks are greater than equal to 100 and less than 90
printf("distintion");			//if above conditon is true it will print discintion
else if((marks>=70)&&(marks<=80))	//using if conditon checking that if marks are greater than equal to 70 and less than 80
printf("first class");			//if above conditon is true it will print first class
else if((marks>=60)&&(marks<=70))	//using if conditon checking that if marks are greater than equal to 60 and less than 70
printf("second class");			//if above conditon is true it will print second class
else
printf("pass");

}
