//WAP to find factorial of a number using function?
#include<stdio.h>
int factorial();
int main(){
    int fact;
    fact=factorial();
    printf("factorial is %d",fact);
}
int factorial(){
    int number,fact=1;
    printf("enter the number");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        fact=fact*i;
    }
    return fact;
}