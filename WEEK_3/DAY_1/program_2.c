//WAP to find size of given strings?
#include <stdio.h>
int main()
{
  char first_name[10];//declaring the string 
  char last_name[20];;//declaring the string 
  printf("enter first name:");
  scanf("%s",first_name);//reading the string
  printf("enter last name:");
  scanf("%s",last_name);//reading the string
  printf("%s %s",first_name,last_name);//printing the names
  printf("\n%d \n%d",sizeof(first_name),sizeof(last_name));//printing the size of strings
    return 0;
}