// WAP to print sum of n natural numbers in array?
#include<stdio.h>		//including standard input and output using preprocessive directives
int main(){
    int a[50],i,n,sum=0;	//declaring array with size 50 and variables like i,n,sum      
    
    printf("enter the elements");   
    scanf("%d",&n);		//reading  the variable 'n' to get how numbers to print 
    printf("enter array elements");
    for(i=0;i<=n;i++)		//using for loop getting the array elements
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    sum=sum+a[i];		//using arthematic operator getting sum
       printf("%d",sum);
    }
