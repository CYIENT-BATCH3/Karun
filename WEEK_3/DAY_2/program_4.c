//WAP to get swap of two numbers using pass by reference?
ALGORITHM:
1.program to find the swap of two numbers using pass by reference.
2.declare function as swap in global.
3.in main function declare the variables a and b with pointer variables.
4.using calling function call the value to define function.

#include<stdio.h>
void swap(int*,int*);//declaring function with pointer arguments
int main(){
	int a,b,*pa,*pb;//declaring the variables and pointers
	printf("enter the value");
	scanf("%d %d",&a,&b);
	pa=&a;//stores address of a in pointer pa
	pb=&b;//stores address of b in pointer pb
	swap(pa,pb);//calling function
}
void swap(int *x,int *y){//defining the function
	int *temp;//declaring pointer variable as temp
	temp=x;
	x=y;
	y=temp;
	printf("after swapping%d %d",*x,*y);//prints x and y after swapping
}
