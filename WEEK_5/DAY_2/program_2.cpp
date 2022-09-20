//WAP to get employee details using class in c++?(functions written inside the class)
/*ALGORITHM:
 * start
 * program to get employee details using class in c++
 * declaring the class and class name as employee
 * access the public specifier and define functions inside the class
 * taking input and display as two functions
 * inside functions read and print the employee details
 * in main function declare one object in class
 * using that object call the input and display functions from main
 * stop
 */
#include<iostream>
using namespace std;
class employee		//class declaration with employee as class name
{
	char employee_name[10];
	int employee_age;
public:				//public access specifier
	void input()
	{
		cout<<"enter the name:"<<endl;
		cin>>employee_name;				//reading the variable from user
		cout<<"enter the age:"<<endl;
		cin>>employee_age;				//reading the variable
	}
	void display()
	{
	    cout<<"name is:"<<employee_name<<"\n"; //prints the employee name
	    cout<<"age is:"<<employee_age;			//prints the employee age
	}
};
int main()
{
	employee e1;		//class object
	e1.input();			//calling function for input and display
	e1.display();
}
