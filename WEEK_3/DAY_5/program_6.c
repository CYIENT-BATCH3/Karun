//WAP to understand structure padding?
ALGORITHM:
1.to understand structure padding.
2.declare the structure and inside structure declare some variables.
3.in main function print the size of whole structure
#include<stdio.h>
struct pad{//declare structure
	int a;
	char b;      //declare different data types
	float c;
	double d;
}k;
int main(){
	printf("size of structure:%d",sizeof(k));//print size of structure
}
