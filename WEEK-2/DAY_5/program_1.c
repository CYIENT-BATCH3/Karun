//WAP performing addition,subtraction,multiplication,division operations using funtions?
#include<stdio.h>
void sum()      //name of function for sum
{
    int x=4,y=5;    //declaring variable for sum
    printf("addition=%d\n",x+y);//printing the sum value
}
void subtraction(){     //name of function for subtraction
    int a=5,b=3;        //declaring the variables for subtraction
    printf("subtraction=%d\n",a-b); //printing the subtraction
}
void multiplication()   //name of function for multiplication
{
    int x=3,y=2;        //declaring the variables for multiplication
     printf("multiplication=%d\n",x*y);//printing the multiplication
}
void division(){        //name of the function for division
   int x=6,y=2;         //declaring the variables for division
    printf("division=%d",x/y);
}
void main()
{
    sum();              //calling funtion for sum
    subtraction();      //calling function for sunbtraction
    multiplication();   //calling functuin for multiplication
    division();         //calling function for division
}
