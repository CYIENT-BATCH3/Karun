//WAP to convert upper to lower in c++?
/*ALGORITHM:
 * start
 * program to convert upper to lower
 * declare array of character
 * taking for loop for printing one by one character
 * inside loop take function as tolower() to print upper case
 * stop
 */
#include<iostream>			//standard i/o for cin and cout
#include<cstring>
using namespace std;
int main()
{
	char str[10];					//declaring the array of character
	cout<<"enter the string to convert:";
	cin >>str;					//reading variable
	for(int i=0;i<=strlen(str);i++)
    {
    	putchar(tolower(str[i]));//tolower() gives upper case
    }
}
