//WAP using struct as return type in pass by value?

#include<stdio.h>//includes the header files
#include<string.h>
struct employee{//structure declaration
	int employee_id;
	char employee_name[10];
}s;
struct employee details(struct employee s);//function declaration
int main(){
	struct employee s,ptr;//structure variable
	ptr=details(s);//calling function 
	printf("ID:%d\nNAME:%s",ptr.employee_id,ptr.employee_name);
}
struct employee details(struct employee s){//defining function
	s.employee_id=69908;//initialising the integer value
strcpy(s.employee_name,"karun");//strcpy to get string 
	return s;
}
