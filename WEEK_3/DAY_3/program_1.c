//WAp to get address of single,double,trpile pointers?
ALGORITHM:
1.program to get address of different pointers.
2.declare the variable a and single,double,triple pointers.
3.store the address in different pointers.
4.print the address.

#include<stdio.h>
int main()
{
	int a=10;//declare variable
	int *p1,**p2,***p3;//declare single,double,triple pointers
	p1=&a;//stores address of a in pointer p1
	p2=&p1;//stores address of p1 in pointer p2
	p3=&p2;//stores address of p2 in pointer p3
	printf("address of p1%d\n",p1);//prints address of p1
	printf("address of p2%d\n",p2);//prints address of p2
	printf("address of p3%d\n",p3);//prints address of p3
}
