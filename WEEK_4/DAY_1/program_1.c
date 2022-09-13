// WAP to get student details using structure of functions?
/*ALGORITHM:
1.start
2.declare the sturcture variable and inside it declare age and name of student.
3.declare the function with no return type and with structure argument.
4.in main function declare the structure variable.
5.call this structure variable to defining function.
6.in defining function print the age and name of the student.
7.stop*/

#include<stdio.h>
struct student{   //structure declaration
	int age;
	char name[10];
};
void details(struct student record);//function declaration
int main(){
	setbuf(stdout,NULL);
struct student record;//structure variable
printf("enter the age");
scanf("%d",&record.age);//reading integer variable
printf("enter the name\n");
scanf("%s",record.name);//reading character variable
details(record); //calling function

}
void details(struct student record){//defining function
	printf("age of student is %d\n",record.age);//print the age of student
	printf("name of the student is %s",record.name);//print the name of student
}
