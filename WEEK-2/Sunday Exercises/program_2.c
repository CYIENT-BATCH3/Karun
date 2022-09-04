//Algorithm for below program:
1.program to find IVRS functionality access phone-function using functions in c.
2.declare phone as a function in global.
3.write calling function in main.
4.define the phone functtion to access.
5.write the conditions for choosing options


//Write program for IVRS based mobile functionality access
Phone Function
1-call
2-msg
3-recvcall
9-break
#include<stdio.h>
void phone();//function declarion
void main()     //main function
{
   int number;       //declaring variable
   printf("choose the option"); 
   scanf("%d",&number);      //reading the variable
   phone(number);            //calling function
}
void phone(int option){      //defining the function

if(option==1)            //conditions for choosing options
   printf("\ncall");
   else if(option==2)
   printf("\nmessage");
   else if(option==3)
   printf("\nreceive call");
   else if(option==4)
   printf("\nlist of contacts are:\nA\nB\nC\nD\nE");
   else
 printf("\ninvalid");
 }

