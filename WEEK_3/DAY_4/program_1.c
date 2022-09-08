// WAP to employee database using structure?
ALGORITHM:
1.program to get employee database using structure.
2.declare the structure and inside the structure declare variables.
3.in main function read all the employee details and print it.

#include<stdio.h>
struct employee_database{//structure declaration
	int employee_id;//declaring the variable
	char employee_name[30];
	float employee_salary;
};
int main(){
	struct employee_database e1;//defining the structure
	printf("enter the ID:");
	scanf("%d",&e1.employee_id);//reading employee id
	printf("enter the name:");
	scanf("%s",&e1.employee_name);//reading employee name
	printf("enter the salary:");
	scanf("%f",&e1.employee_salary);//reading employee salary
	printf("ID-%d\tNAME-%s\tSALARY-%f\t",e1.employee_id,e1.employee_name,e1.employee_salary);
}
