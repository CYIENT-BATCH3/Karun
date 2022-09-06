//WAP in C to count the total number of 1.alphabets 2.digits 3.special characters?


#include <stdio.h>
#include<string.h>
int main()
{
  char word[20];//declaring the string as word 
  int i=0,alphabet=0,digit=0,special=0,length;//declare counter variable i,length
  printf("enter the string---");
  scanf("%s",word);//reading the string
  length=strlen(word);//finding the length of string
  while(i<length)
 {
      if(word[i]>=65&&word[i]<=90||word[i]>=97&&word[i]<=122)//conditon for getting alphabets using ASCII 
      alphabet++;
      if(word[i]>=48&&word[i]<=57)//condition for getting numbers using ASCII
      digit++;
      if(word[i]>=32&&word[i]<=47||word[i]>=58&&word[i]<=64||word[i]>=94&&word[i]<=96)
      special++;
    i++;  
}
      printf("number of alphabets%d\n",alphabet);
      printf("number of digits%d\n",digit);
      printf("number of special characters%d",special);
       }