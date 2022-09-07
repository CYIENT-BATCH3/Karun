//WAp to print void pointer?
ALGORITHM:
1.to get void pointer.
2.declare the void pointer.
3.store variable address in pointer
4.performing typecasting to print

#include<stdio.h>
int main()
{
char a='k';//declare character
float number=2.0;//declare float variable
void *pointer;//declaration of void pointer
pointer=&number;//stores numbers address in pointer
printf("after typecasting%f\n",*(float *)pointer);//type casting
pointer=&a;//stores character address in pointer
printf("after typecasting%c\n",*(char *)pointer);//typecasting
}
