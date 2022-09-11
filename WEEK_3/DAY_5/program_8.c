//WAP to understand typedf with structure?
/*ALGORITHM:
1.to understand typedef with structure.
2.declare the structure and inside structure declare some variables.
3.in main function declare the typedef with some alias name.
4.we can use alias name for further declaration.*/

#include<stdio.h>
struct data{ //structure declaration
	int employee_id;  //declaring the variables
	char employee_name[5];
};
int main(){
	typedef struct data t_def;//typedef declaration
	setbuf(stdout,NULL);
	t_def e1;
	e1.employee_id=69908;//initializing
	printf("ID:%d\n",e1.employee_id);
    e1.employee_name[5];
	printf("enter the name:");
	scanf("%s",e1.employee_name);//reading the string
	printf("NAME:%s",e1.employee_name);
	}
