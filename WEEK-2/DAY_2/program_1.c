//write a program to print sum of 4 digit number?
ALGORITHM:
1. Get number by user
2. Get the modulus/remainder of the number
3. sum the remainder of the number
4. Divide the number by 10
5. Repeat the step 2 while number is greater than 0.
   
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
