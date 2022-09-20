//WAP to find sum of four digit number in c++?

#include<iostream>			//standard i/o for cin and cout
using namespace std;		
int main(){
	int number,remainder,sum=0;							//declaring variables
	cout<<"enter the number"<<endl;
	cin>>number;										//reading variables
	while(number>0)										//taking while loop 
	{
	remainder=number%10;								//to get remainder value
	sum= sum + remainder;								
	number=number/10;
	}
	cout<<"the sum of digits:"<<sum<<endl;//print the sum of digits
}
