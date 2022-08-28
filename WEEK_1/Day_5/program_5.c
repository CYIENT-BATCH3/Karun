5.Implement basic logic gates using c and consider input as 0,0?

#include<stdio.h>                    //Including header file
int main(){
int a=0,b=0,and,or,not;             //Declaring the integer variables
and=a&&b;                          //Performing AND operation fo given variables
printf("%d\n",and);               //Printing the AND variable
or=a||b;
printf("%d\n",or);
not=!a;
printf("%d",not);
}
