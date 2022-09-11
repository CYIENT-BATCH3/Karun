//WAP to define bitfield with width of one bit?
#include<stdio.h>
struct student {//structure declaration
	 int high;
	 int low;
}s1;
struct student2{//structure declaration
	 int high:1;//declaring variable with width of the bit
	 int low:1;
}s2;
int main(){
	printf("size of s1:%d\n",sizeof(s1));
	printf("size of s2:%d\n",sizeof(s2));
}
