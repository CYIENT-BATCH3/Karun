//WAP to add,subtract and multiplication using no return and with arguments in function?
#include<stdio.h>
void sum(int ,int );//declaration function with actual arguments
void sub(int ,int );//declaration function with actual arguments
void mul(int ,int );//declaration function with actual arguments
void main(){
    int m,n; //declaring the variables
    printf("enter the values to sum");
    scanf("%d%d",&m,&n);	//reading the addition variables
    sum(m,n);	//calling function for sum
    printf("enter the values to subtract");
    scanf("%d%d",&m,&n);	//reading the subtraction variables
    sub(m,n);		//calling function for subtraction
    printf("enter the values to sum");
    scanf("%d%d",&m,&n);	//reading the multiplication function
    mul(m,n);		//calling function for multplication
}
void sum(int x, int y){		//declaration for formal arguments for addition
    printf("sum=%d",x+y);	//prints addition	
}
void sum(int x, int y){		//declaration for formal arguments for subtraction
    printf("sub=%d",x+y);	//prints subtraction
}
void sum(int x, int y){
    printf("mul=%d",x+y);
}