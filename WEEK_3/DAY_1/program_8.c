//WAP to print concate two strings without STRCAT
#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="sathuluri";//declaring string1 as str1
    char str2[10]="karun";//declaring the string2 as str2
    int i,length1,length2;//declaring counter variable and length
    length1=strlen(str1);//getting length of str1
    length2=strlen(str2);//gettong length of str2
    for(i=0;i<=length2;i++)
    {
        str1[length1+i]=str2[i];//storing string2 in string1 to concate
        
    }
    printf("%s",str1);//prints concate string
}