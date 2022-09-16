//WAP to print MM_DD_YYY using structure bit field mechanism
#include<stdio.h>				//include standard input and output header file using preprocessor directive
struct day{						//define a structure
	unsigned int MM:4;			//declare a unsigned int variable for month with width of 4bits and 5 bits width for
	unsigned int DD:5;
	int YY;
};
int main()						//start main()
{
	setbuf(stdout,NULL);
	struct day exp1;			//declare a struct variable
	exp1.MM=12;					//assign data to MM of struct
	exp1.DD=31;					//assign data to DD of struct
	exp1.YY=2022;				//assign data to YY of struct
	printf("output:%d/%d/%d",exp1.MM,exp1.DD,exp1.YY);		//print the data of the members of structure
}
