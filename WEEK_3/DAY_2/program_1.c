//WAP to find address and values of using different datatypes in pointers?
ALGORITHM:
1.Program to get address and value of given variables
2.declare the pointer variable and variables in different data types.
3.then store address variable in pointer
4.print the address and values of given variable.

#include<stdio.h>
int main(){
int a=20,*pi;//declaring the integer variable and pointer variable 'pi'
float b=2.5,*pf;//declaring the float variable and pointer variable 'pf'
char c='a',*pc;//declaring the character variable and pointer variable 'pc'
pi=&a; //stores address of a
pf=&b;//stores address of b
pc=&c;//stores address of c
printf("address of a is:%u",pi);//printing address of a
printf("\naddress of b is:%u",pf);//printing address of b
printf("\naddress of c is:%u",pc);//printing address of c
printf("\nvalue of a is %d",a);//printing value of a
printf("\nvalue of b is %d",b);//printing value of a
printf("\nvalue of c is %c",c);//printing value of a
}
