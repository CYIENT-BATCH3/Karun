//WAP to understand call by reference?
ALGORITHM:
1.start
2.declare the function as employee with formal arguments .
3.in main function declare the variables.
4.call the function wih address to function defination.
5.in function defination read and print the id and name.
6.stop.

#include<stdio.h>
void employee(int *empid,char *empname);//function declaration
//void employee_id(int *);
	int main(){
	int id;
	char name[10];
	employee(&id,name);//calling function for employee
	
}
void employee(int *empid,char *empname){//defining function
    printf("enter the id\n");
	scanf("%d",empid);//reading the integer variable
    printf("enter the name");
    scanf("%s",empname);//reading the character variables
	//strcpy(empname,"karun");
	printf("ID:%d\nNAME:%s\n",*empid,empname);
	}



