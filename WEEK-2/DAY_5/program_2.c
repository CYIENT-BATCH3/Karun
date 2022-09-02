//WAP to swap two vales using function?
#include<stdio.h>
void swap()      //name of function for swap
{
    int a=2,b=3,temp; //declaring the variables for swapping and taking temporary variable
    printf("before swapping:a=%d b=%d\n",a,b);//printing before swapping
    temp=a;         //assigning a variable at temp
    a=b;            //assigning b variable to a
    b=temp;         //assigning temp variable to b
    printf("after swapping:a=%d b=%d\n",a,b);//printing after swapping
}
void main(){
    swap(); //calling function
}
