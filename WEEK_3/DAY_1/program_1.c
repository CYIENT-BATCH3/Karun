//WAP to enter first and last name using string and also check o/p for gets and scanf?
ALOGORITHM:
1.program to print first and last name using strings.
2.declaring the strings as first_name and last_name.
3.read the string from user.
4.atlast prints the input and output.



#include <stdio.h>
int main()
{
  char first_name[10],last_name[10];;//declaring the string for first name and last name
  printf("enter first name:");
  scanf("%s",first_name);//reading the string
  printf("enter last name:");
  scanf("%s",last_name);//reading the string
  printf("%s %s",first_name,last_name);//printing the names
    return 0;
}
