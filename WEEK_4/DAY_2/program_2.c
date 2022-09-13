//WAP to append into a file using fprintf()
#include<stdio.h>					//include standard input and output header file using preprocessor directive
#include<stdlib.h>					//include the stdlib.h
int main()							//start main()
{
	setbuf(stdout,NULL);
	FILE *fp;						//declare a file pointer
	char ch[100];						//declare a char ch to read and print the char with char
	fp=fopen("C:\\Users\\au69911\\Desktop\\LeCo\\week4\\Day_1\\123.txt","a");
	//open a file in read mode using fopen()
	if(fp==NULL){					//if file not found print the below statement
		printf("File not found\n");
	}
	else{
		printf("File Found\n");
	}
	puts("enter the string");
	scanf("%[^\n]s",ch);			//enter the string to write in a file
	fprintf(fp,"%s",ch);			//write the string entered in the above step
	fprintf(fp,"\n%s %s %s","I'm","in","office");		//another to write in to a file
	fclose(fp);
}
