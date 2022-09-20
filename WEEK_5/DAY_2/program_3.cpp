//WAP to understand the array concept in c++?(functions written inside the class)
/*ALGORITHM:
 * start
 * program to understand the array concept in c++
 * declaring the class and class name as my class
 * access the public specifier and define functions inside the class
 * taking input and display as two functions
 * inside functions read and print the values
 * in main function declare one object in class with array
 * using for loop for one by one iteration
 * using that object call the input and display functions from main
 * stop
 */
#include<iostream>
using namespace std;
class myclass		//class declaration with myclass as class name
{
	int output;
public:				//public access specifier
	void input(int num)				//defination of function
	{
		output=num;								//
	}
	void display()					//defination of function
	{
		cout<<"i am=:"<<output;
	}
};
int main()
{
	myclass object[10];							//class object
	for(int i=0;i<10;i++)object[i].input(i);	//calling function for input and display
	for(int i=0;i<10;i++)object[i].display();
}
