//WAP to find square of given number using macro?
ALGORITHM:
1.to get square of given number.
2.declare the macro function using #define.
3.declare the integer variable x.
4.print the square of given number.

#include<stdio.h>
#define SQUARE(x) (x*x)//defining macro
int main(){
	setbuf(stdout,NULL);
	int x;//declaring variable
	printf("enter the value of x");
	scanf("%d",&x);//reading variable
	printf("square of number is:%d",SQUARE(x));//printf the aquare of value
}
