//WAP to perform funtion with argument and with return?
#include<stdio.h>
int mul(int ,int ); //declaring funtion with actual arguments
int main(){
    int a,b,c;        //declaring the variables
    printf("enter the values");
    scanf("%d%d",&a,&b);//reading the variables
    c=mul(a,b);//calling function
}
int mul(int x,int y){ //declaring function with formal arguments
    printf("multiplication=%d",x*y);
    return x*y;		//returning to main funtion
}