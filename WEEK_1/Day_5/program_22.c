2.The entire area of a circular garden is tobe covered with grass by a gardener .The radius of the garden is given by user input. Calculate the area that has to be covered?
#include<stdio.h>
int main(){
    int r;                                   //Declaring the variable
    const float pi=3.14;                     //Keeping pi value in constant
    float area;                             //Declaring float variable area
    printf("enter the radius");            //User want to enter the radius
    scanf("%d",&r);                        //Reading the variable
    area=pi*(r*r);                        //Formula for area of radius
    printf("Area that has covered:%f",area);    //printing area that covered
}
