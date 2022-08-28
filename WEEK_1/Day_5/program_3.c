3.Take a six digit number as input from the user and reverse the reverse a number?

#include<stdio.h>                                  //Including the header files 
 
int main ()
{
  int n, t;                                       //Declaring the integer variables
  printf ("enter a number");
  scanf ("%d", &n);				//Reading the variable
  printf ("%d Reversed number", n);             //printing the variable one by one
  t = n % 10;					//Here calculate the remainder value
  printf ("%d", t);                             //Printing the remainder value
  n = n / 10;                                   //calculating the quotient
  t = n % 10;
  printf ("%d", t);
  n = n / 10;
  t = n % 10;
  printf ("%d", t);
  n = n / 10;
  t = n % 10;
  printf ("%d", t);
  n = n / 10;
  t = n % 10;
  printf ("%d", t);
  n = n / 10;
  t = n % 10;
  printf ("%d", t);

}



