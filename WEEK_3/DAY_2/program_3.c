//WAP to swap the two numbers using functions?
ALGORITHM:
1.program to find the swapping of two variables using functions.
2.declare the function.
3.in main function call function to called function.
4.in define function perform the operations for swapping.

#include<stdio.h>
void swap(int,int);//function declaration
int main(){

swap(3,4);//calling function
}
void swap(int x,int y){//defining the function
	int temp;//declaring the temp variable
	temp=x;
	x=y;
	y=temp;
	printf("after swapping%d %d",x,y);//after swapping 
}
