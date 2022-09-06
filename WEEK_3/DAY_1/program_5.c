//WAP to find length of a string using string length function
ALGORITHM:
1.program to find string length usingstrlen().
2.declare the string and lenght variable.
3.length=strlen() gives length of given string.
4.print the length of string.


#include <stdio.h>
#include<string.h>
int main(){
    char str[10];//declare str as string
    int length;
    printf("enter a string to find length:");
    scanf("%s",str);//reading the string
    length=strlen(str);//to find length of string
    printf("length of string length:%d",length);//prints length of an string
}