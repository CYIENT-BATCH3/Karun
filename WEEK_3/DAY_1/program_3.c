ALOGORITHM:
1.program to count the alphabets in given string.
2.declare and intialize the string as word and to count the words declare count variable.
3.take loop for checking the string length that not equal to NULL.
4.write the condition that string null increase the count

//WAP in C to count the total number of words in a string?
#include <stdio.h>
int main()
{
  char word[]="hello world";//declaring the string
  int i=0,count=0;//declare counter variables i and count
  while(word[i]!='\0'){
   if(word[i]==' '){
   count++;
  }
  i++;
  printf("%d",count);
 }
  }