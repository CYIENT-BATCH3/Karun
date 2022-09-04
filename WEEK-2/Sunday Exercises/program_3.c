//Algorithm for below program:
1.program to find IVRS functionality access camera-function using functions in c.
2.declare camera as a function in global.
3.write calling function in main.
4.define the camera functtion to access.
5.write the conditions for choosing options

 
//Write program for IVRS based mobile functionality access
Camera function- Enables GPS function then
1-Taking Picture
2-Record Video
3- List 10 imagers
9- Break
#include<stdio.h>
void camera();//function declarion
void main()     //main function
{
   int number;       //declaring variable
   printf("choose the option"); 
   scanf("%d",&number);      //reading the variable
   camera(number);            //calling function
}
void camera(int option){      //defining the function
printf("enable GPS function");
if(option==1)            //conditions for choosing options
   printf("\ntaking picture");
   else if(option==2)
   printf("\nRecord video");
   else if(option==3)
   printf("\nportrait mode");
   else if(option==4)
   printf("\nselfie mode");
   else if(option==5)
   printf("\nlist 10 images are:\n1....\n2....\n3....\n4....\n5.....");
   else
 printf("\ninvalid");
 }

