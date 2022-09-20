//WAP to understand private and public concepts in c++?
/*ALGORITHM:
 * start
 * program to understand the public and private in c++
 * declare one class and name it as myclass
 * inside the class take public and private access specifier and declare variables
 * in main function declare one class variable
 * print the object 
 * stop
 */
#include<iostream>		
using namespace std;
class myclass		//class declaration my class is class name
{
public:				//public access specifier
	int x;			//public variable
private:			//private access specifier
	int y;			//private variable

};
int main()
{
	myclass obj;
	obj.x=25;			//allowed public
	obj.y=30;			//allowed private
	cout<<obj.x<<endl<<obj.y;
}
