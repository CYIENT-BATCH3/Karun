//WAP to find largest among two numbers in c++?
#include<iostream>			//includes the i/o using 
using namespace std;			//used to get std members like (cin,cout,endl)
int main(){
	int a,b;							//declaring variables
	cout<<"enter the values of a and b"<<endl; 
	cin>>a>>b;				//reading variables
	if(a>b)					//checking condition to check a is greater or b is greater
	{
		cout<<"a is greater than b"<<endl;//if condition is true prints a is greater
	}
	else
		{
			cout<<"b is greater than a"<<endl;//if condition fails prints b is greater
		}
}
