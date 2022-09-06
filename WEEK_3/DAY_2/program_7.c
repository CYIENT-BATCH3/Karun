//WAP to return pointer value to the function?
#include<stdio.h>
int *get();function declaration
//int a;
int main(){
	int *p;//declare pointer
	p=get();
	printf("%d\n",p);//gets address of p
	printf("%d\n",*p);//gets value of p
	return 0;
}
int *get(){
	 static int a=10;
	return(&a);//returning to main
}
