//WAP using function to written quotient and remainder passing multiple values using pointers?
ALGORITHM:
1.program to write quotient and remainder using pointers.
2.declare function with some arguments.
3.in main function write a and b variables and pointer variables p and q.
4.pass the value and address using calling function
5.define the function coming from calling function

#include<stdio.h>
void result(int x,int y,int *remainder,int *quotient);//function declaration
int main(){
	int a=10,b=5;//declaring variables
	int *p,*q;//pointer variabels
	p=&a;//stores address of a in pointer p
	q=&b;//stores address of b in pointer q
	result(a,b,p,q);//calling function
	printf("%d %d",a,b);
	}
void result(int x,int y,int *remainder,int *quotient){//defining the function
	*remainder=x%y;//gets remainder and assigning to address of a
	*quotient=x/y;//gets quotient and assigning to address of b
}

