// WAP to get  4x4 matrix using 2d array
#include <stdio.h>

int main()
{		
   int a[4][4],i,j,m,n,sum;		//declaring two dimensional array and counter variables fo loop
   printf("enter no.of rows and columns");
   scanf("%d%d",&m,&n);			//reading the rows and columns by m and n
   printf("enter the array elements");
   for(i=0;i<m;i++){			//loops for reading 2D array
   for(j=0;j<n;j++){
   scanf("%d",&a[i][j]);		//reading the elements
   }
   }
   printf("two dimensional array elements\n");
   for(i=0;i<m;i++)			//loops for printing the array	
   {
   for(j=0;j<n;j++)
   {
   printf("\t%d",a[i][j]);		//here using both the printf's for printing array in 4x4 matrix
   }
   printf("\n");
   }
   return 0;
}