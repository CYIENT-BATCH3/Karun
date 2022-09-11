//WAP to store the value from 0-7 using width of 3 bits?
/*ALGORITHM:
1.program to get alue of 0-7 width of 3 bits.
2.declare the structure and inside the structure declare one variable with width.
3.then in main function checking numbers from 0-7 to store*/
#include<stdio.h>
struct student {//structure declaration
	 unsigned int high:3;
	}s1;

int main(){
s1.high=4;
	printf("size of s1:%d\n",sizeof(s1));
	printf("value of s1:%d\n",s1.high);
	s1.high=14;
		printf("size of s1:%d\n",sizeof(s1));
		printf("value of s1:%d\n",s1.high);
}
