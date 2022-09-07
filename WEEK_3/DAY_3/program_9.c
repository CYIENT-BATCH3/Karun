//WAP to access array using pointer
ALGORITHM:
1.program to understand array of pointer.
2.declare an array variable.
3.by taking a+0 it gives address of particular array.

#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5};//declare array elements
	printf("%u\n",a+0);//print address of first element in array
	printf("%d",*(a+0));//print value of first element in array
}
