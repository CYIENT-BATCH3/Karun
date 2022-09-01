// WAP to read and print the elements?
#include<stdio.h>
int main(){
    int a[10],i,n;              //declaring the array with size 50 and variables i an d
    printf("enter the elements");   
    scanf("%d",&n);     //reading the variable 'n'
    for(i=0;i<n;i++){   //using for loop reading all the array elements
       scanf("%d",&a[i]);   //reading array elements
    }
    printf("elements are below");
    for(i=0;i<n;i++){   //for loop for printing all the array elements
        printf("%d ",a[i]);
    }
}
