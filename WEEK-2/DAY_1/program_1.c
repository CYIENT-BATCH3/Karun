.WAP to find student grading using if,elseif and else conditions?
  ALGORITHM:
1.program to check student grading using if,elseif and else.
2.declare integer variable as marks.
3.first check with if conditon that marks are greater than 90 or less than 100.
4.next checking with else if condition that marks are greater than 70 or less than 80.
5.if above conditions become false it goes to else condition.

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
