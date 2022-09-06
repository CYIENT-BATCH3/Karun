//WAP to perform arthematic operations using pointers?
ALGORITHM:
1.Program to get address and value of given variables
2.declare the pointer variable and variables in different data types.
3.then store address variable in pointer.
4.print the address and values of given variable.
5.pre-increment the pointer value to perform arthematic operation.

#include<stdio.h>
int main(){
int a=10;//declaring integer variable
int b=20;//declaring integer variable
int *p,*q;//declaring pointers p and q
p=&a;
q=&b;
printf("address of p is:%u\n",p);
printf("value 0f p is:%d\n",*p);
printf("%d",*p+*q);
printf("\nvalue of p variable is:%d",++*p);
}