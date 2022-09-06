//WAP to print concate two strings with STRCAT
ALOGORITHM:
1.
#include <stdio.h>
#include<string.h>
int main(){
    char str1[10];//declare str1 as string
    char str2[10];//declare str2 as string
    //char concate[50];
    printf("enter string 1:");
    scanf("%s",str1);//reading the string
    printf("enter string 2:");
    scanf("%s",str2);  
   //strcat(str1,str2);
   printf("concate of string %s",strcat(str1,str2));//prints concate of string using strcat(string1, string 2)
}