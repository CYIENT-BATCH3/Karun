//WAP to print n natural numbers using do-while in c++?
/*ALGORITHM:
 * start
 * to find n natural numbers
 * declare the variables
 * using do while loop for printing natural numbers
 * stop
 */
#include<iostream>			//standard i/o for cin and cout
using namespace std;
int main()
{
	int minimum=1,maximum=100;	//declare variable as minimum and maximum
	do							//using do while
	{
		cout<<minimum<<"\n";	//printing from minimum value and increment
		minimum++;
	}
	while(minimum<=maximum);
}
