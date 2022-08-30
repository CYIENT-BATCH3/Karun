//write a program to print sum of 4 digit number
#include <stdio.h>

int main()
{
   int a=4386,sum=0,rem;  //declaring the variables  a and intially sum=0                 
  while(a>0){           //using while loop execting  below statements until condition fails
      rem=a%10;         //to get remainder value divide 'a' value with 10       
      sum=sum+rem;      //adding remainder value with sum and assigning to sum
      a=a/10;           
      
  }
printf("%d",sum);
}
