3. WAP to print calculator using switch case
#include <stdio.h>
int main()
{
   int a,b;                     
   char cal;                    
   printf("enter the values");
   scanf("%d %d",&a,&b);	
   printf("enter a choice ");
   scanf("%c",&cal);		 
  // printf("%c",cal);
   switch(cal)				
   {
       case '+':
       printf("sum=%d%d",a+b);
       break;
       case '-':
       printf("sub=%d%d",a-b);
       break;
       case '*':
       printf("mul=%d%d",a*b);
       break;
       default:
       printf("nothing");
   }
    return 0;
}