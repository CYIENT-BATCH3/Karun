//WAP to know dangling pointer?

#include<stdio.h>
int main()
{
	int *pointer=(int *)malloc(sizeof(int));//malloc declaration
	int number=9;
	printf("memory allocation %d\n",*pointer);
	free(pointer);
	printf("memory deallocation %d",*pointer);
}
