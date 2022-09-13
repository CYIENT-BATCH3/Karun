//WAP using pass by reference of structure variable in function? 
/*ALGORITHM:
 * start
 * declare the structure with employee
 * declare the function as details with structure as argument
 * in main function declare the structure variable
 * now call that main function to define function
 * in defining function read and print the employee details
 */
#include<stdio.h>
#include<string.h>
struct employee{ //structure declaration
	int employee_id;
	char employee_name[20];
	float salary;
};
void details(struct employee *);//function declaration
int main(){
setbuf(stdout,NULL);
struct employee record;//structure variable
details(&record);//calling function
}
void details(struct employee *record){//defining function
	record->employee_id=25;
	strcpy(record->employee_name,"karun");//using string copy for reading the string
	printf("ID:%d\n",record->employee_id);
	printf("name:%s\n",record->employee_name);
}
