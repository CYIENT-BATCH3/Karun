// WAP to 10 employee database using structure?
ALGORITHM:
1.progarm to get 10 employee data at a time.
2.declare structure and inside structure declare some variables.
3.then in main function using array concept print 10 employee data.

#include<stdio.h>
struct employee_database{//structure declaration
	int employee_id;//declaring the variable
	char employee_name[30];
	float employee_salary;
};
int main(){
	struct employee_database e1[5];//defining the array of structure
	int i;
	printf("enter data\n");
	for(i=0;i<5;i++){//loop for
	    printf("enter the id:");
	scanf("%d",&e1[i].employee_id);//reading employee id
	 printf("enter the name:");
	scanf("%s",&e1[i].employee_name);//reading employee name
	 printf("enter the salary:");
	scanf("%f",&e1[i].employee_salary);//reading employee salary
	}
	for(i=0;i<5;i++)
	printf("ID-%d\tNAME-%s\tSALARY-%f\t\n",e1[i].employee_id,e1[i].employee_name,e1[i].employee_salary);
}
