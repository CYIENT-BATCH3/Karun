//WAp to print different datatype values in void pointer?
ALGORITM:
1.to get different data types values using void pointer.
2.declare some different datatypes and void pointer.
3.store every varaibale in pointer.
4.using typecasting print the datatype values. 

#include<stdio.h>
int main()
{
	void *pointer;//declaration of void pointer
char character='k';//declare character
float number=2.0;//declare float variable
int number2=10;
double number3=2000000;
//long number4=10987650987;
pointer=&character;//stores numbers address in pointer
printf("after typecasting %c\n",*(char *)pointer);//type casting
pointer=&number;//stores character address in pointer
printf("after typecasting %f\n",*(float *)pointer);//typecasting
pointer=&number2;//stores numbers address in pointer
printf("after typecasting %d\n",*(int *)pointer);//type casting
pointer=&number3;//stores character address in pointer
printf("after typecasting %lf\n",*(double *)pointer);//typecasting
}
