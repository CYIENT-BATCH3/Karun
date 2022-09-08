//WAP to understand the union concept?
ALGORITHM:
1.program to understand the concept of union.
2.declare the union and inside union declare some variables.
3.print the size of union then we understand concept of union.


#include<stdio.h>
union employee{//union declaration
	int a;
	char b;             //declaration of different data types 
	float c;
	double d;
}u;
int main(){
	printf("%d",sizeof(u));//printing size of union
	}
