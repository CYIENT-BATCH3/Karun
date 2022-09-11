//WAP to print area of a circle and area of cone and area of cylinder by using macros?
ALGORITHM:
1.to get area of circle,cone,cylinder using macro function.
2.declare the macro function using #define.
3.declare the float variables radius nad height.
4.write formula for area of circle,cone,cylinder.


#include <stdio.h>
#define PI 3.142//defining the macro
int main(){
	setbuf(stdout,NULL);
	float radius,height;//declare float variables radius and height
	float circle,cone,cylinder;
	printf("enter the height and radius");
	scanf("%f %f",&radius,&height);//reading the variables
	circle=PI*radius*radius;//formula for area of circle
	cone=PI*radius*(radius+sqrt(radius*radius+height*height));//formula for area of cone
	cylinder=2*PI*(radius+height);//formula for area of cylinder
	printf("area of circle is: %f\n",circle);
	printf("area of cone is: %f\n",cone);
	printf("area of cylinder is: %f",cylinder);
}

