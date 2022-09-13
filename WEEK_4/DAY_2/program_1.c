//WAP to open a file in read mode and to extract 2 strings from it
#include<stdio.h>					//include standard input and output header file using preprocessor directive
#include<stdlib.h>					//include the stdlib.h
int main()							//start main()
{
	FILE *fp;						//declare a file pointer
	char ch;						//declare a char ch to read and print the char with char
	fp=fopen("C:\\Users\\au69911\\Desktop\\LeCo\\week4\\Day_1\\123.txt","r");
	//open a file in read mode using fopen()
	if(fp==NULL)					//if file not found print the below statement
		printf("File not found\n");
	else
		printf("File Found\n");
	printf("Latitude:");
	int  cnt=0;
	while(1)						//start a while()
	{
		ch=fgetc(fp);				//get a char from the file using getc()
		if(ch==','){
			cnt++;}
			if(cnt>=2)
		printf("%c",ch);			//print the char until the loop terminates
		if(ch=='N')					//if we found N in the file the print the longitude in next line as another string
			printf("\nLongitude:");
		if(ch==EOF)					//if we reach the end of the file break
			break;


	}
	fclose(fp);						//close the file
}
