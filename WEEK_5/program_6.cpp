//WAP to find factorial of an number in c++?

#include<iostream>			//standard i/o for cin and cout
using namespace std;
int main()
{
	int fact=1,number;		//declare the variables
	cout<<"enter the number:";
	cin>>number;			//read the variables
	//temp=number;
	for(int i=1;i<=number;i++)	//loop for checking one by one 
	{
		fact=fact*i;	
	}
	cout<<"factorial of a number="<<fact;
}
