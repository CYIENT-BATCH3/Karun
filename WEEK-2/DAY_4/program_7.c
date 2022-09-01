// WAP to get  4x4 matrix using 2d array
#include <stdio.h>

int main()
{
   int a[4][4]={{0,1},{3,2},{5,6},{7,8}};//declaring the 2D array 
   int i,j;		//counter variables
   for(i=0;i<4;i++){	//using loops for getting index values and print it
       for(j=0;j<4;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
   }
}