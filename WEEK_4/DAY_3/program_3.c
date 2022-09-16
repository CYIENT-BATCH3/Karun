//WAP to throw error using perror() inbuilt function
#include<stdio.h>					//include standard input and output header file using preprocessor directive
int main()							//start main()
{
	FILE *fp;						//define a file pointer
	char str[10]="akhil";			//declare and initialize string
	fp=fopen("C:\\Users\\au69911\\Desktop\\LeCo\\week4\\Day_1\\12.txt","r");
	//OPEN A FILE IN READ MODE
fprintf(fp,"%s",str);				//try to write into a file which is opened in read mode
		if(ferror(fp))				//checks file error
			perror(".error is" );	//print error message
fclose(fp);							//close file
}
