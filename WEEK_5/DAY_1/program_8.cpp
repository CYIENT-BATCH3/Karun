//WAP to convert lower to upper in c++?
/*ALGORITHM:
 * start
 * program to convert and lower to upper
 * declare array of character 
 * taking for loop for printing one by one character
 * inside loop take function as toupper() to print upper case
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
    	putchar(toupper(str[i]));//toupper() gives upper case 
    }


}
