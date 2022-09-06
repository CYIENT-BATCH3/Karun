//WAP to find length of a string without using string length function?
ALGORITHM:
1.Program to find length of string to find without using strlen().
2.declare the string as str and declare counter variables count,i.
3.take conditon to check given string is not equal to null.
4.if condition is true increment count and i.



#include <stdio.h>
#include<string.h>
int main(){
    char str[10];//declare str as string
    int i=0,count=0;//declare counter variables
    printf("enter a string to find length:");
    scanf("%s",str);//reading the string
   while(str[i]!='\0'){//condition to check string is not equal to null
       count++;//increment count
       i++;//increment i
   }
   printf("length of string %d",count);//prints length of string
}