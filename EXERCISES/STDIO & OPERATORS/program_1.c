1.Implementing the 4 types data format input and 3-values of printing unformatted?

#include<stdio.h>                     
#include<string.h>
int a;
float b;
char name[50];
int main(){
printf("enter a value: ");
scanf("%d",&a);
printf("enter a value");
scanf("%f",&b);
printf("%d\n%f\n",a,b);
printf("enter a name:");
gets (name);
printf("Name is:");
puts(name);
}
