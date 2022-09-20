//WAP to find given character is vowel or consonant in c++?
/*ALGORITHM:
 * start
 * program to find character is vowel or consonant
 * vowels are a,e,i,o,u
 * check condition that given character is equal to vowel or not
 * else character is consonant
 * stop
 */
#include<iostream>			//standard i/o for cin and cout
using namespace std;
int main()
{
	char ch;					//declaring the character variable
	cout<<"enter the character:";
	cin>>ch;					//reading variable
	if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u')//condition to check given charcter is vowel or not
	{
		cout<<ch<<"is vowel"<<endl;//if vowel prints it is vowel
	}
	else
	{
		cout<<ch<<"is consonant"<<endl;//else prints it is consonant
	}

}