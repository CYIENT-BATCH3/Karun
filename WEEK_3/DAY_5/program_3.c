//WAP to understand conditional compilers?
ALGORITHM:

#include <stdio.h>
#define AGE 18//defining macro
int main(){
#ifndef AGE  //checking condition using conditional compiler
	printf("age is not defined");
#else
	printf("age is defined");
#endif
}
