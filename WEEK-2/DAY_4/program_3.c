//WAP to print character and integer variables using arrays?
#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};       //declaring the integer array elements
    char b[]={'a','b','c','d'};//declaring the character array elements
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);    //printing integer array elements 
    for(int i=0;i<5;i++){
        printf("%c\n",b[i]);    //printing character array elements
    }
    }