//WAP with return type and no arguments in functions?
#include<stdio.h>
int add();  //global declaration
int main(){
    int sum;    //declaring sum as variable
    sum=add();  //calling function 
    printf("sum=%d\n",sum);
}
int add(){ //called function
    int a,b,c;  //declaring the variables
    printf("enter the values");
    scanf("%d %d",&a,&b);   //reading the variables
    c=a+b; //performing arthematic operation
    return c; //returning value to main function
}