// WAP to count number of digits in given number using recursive funtion?
#include <stdio.h>
int noofdigits(int n1);//declaring name of function
int counter=0;
int main(){
    int n1,counter;
    printf("\n count te digits of a given number");
    printf("\ninput number");
    scanf("%d",&n1);		//reading number
    counter=noofdigits(n1);     //function call
    printf("the number of digits in the number is:%d \n\n",counter);
    return 0;
}
int noofdigits(int n1){ //defining function
    if(n1!=0){
        counter++;
        noofdigits(n1/10);//calling function
    }
    return counter;		//returns back to main function
}