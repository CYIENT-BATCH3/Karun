//WAP to open a file in read mode and print the content of that file until you reach that char
#include<stdio.h>					//include standard input and output header file using preprocessor directive
#include<stdlib.h>					//include the stdlib.h
int main()							//start main()
{
	FILE *fp;						//declare a file pointer
	char ch;						//declare a char ch to read and print the char with char
	fp=fopen("C:\\Users\\au69911\\Desktop\\LeCo\\week4\\Day_1\\struct_func.txt","r");
	//open a file in read mode using fopen()
	if(fp==NULL)					//if file not found print the below statement 
		printf("File not found\n");	
	else
		printf("File Found\n");
	while(1)						//start a while()
	{
		ch=fgetc(fp);				//get a char by char using fgetc by while loop execution
		printf("%c",ch);			//print a char by char received with the help of fgetc until while loop ends
		if(ch=='z')					//if we reached the particular character in the program break the condition and stop execution
			break;
	}
	fclose(fp);						//close the file
}
