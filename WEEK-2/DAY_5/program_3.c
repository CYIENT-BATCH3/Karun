//WAP to swap two values without using third variable using function?
#include<stdio.h>
void swap()      //name of function for swap
{
    int a=2,b=3; //declaring the variables for swapping
    printf("before swapping:a=%d b=%d\n",a,b);//printing before swapping
    a=a+b;   //performing an arthematic operation and assigning to 'a'      
    b=a-b;  //performing an arthematic operation and assigning to 'b'            
    a=a-b;  //performing an arthematic operation and assigning to 'a'       
    printf("after swapping:a=%d b=%d\n",a,b);//printing after swapping
}
void main(){
    swap(); //calling function
}
