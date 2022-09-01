//WAP to print 2D array elements?
#include <stdio.h>

int main()
{
   int a[10][5],i,j,m,n;			//declaring 2D-array and counter variables i,j and for rows and columns m,n
   printf("enter no.of rows and columns");	
   scanf("%d%d",&m,&n);				//reading rows and columns
   printf("enter the array elements");
   for(i=0;i<m;i++){				//using 2 for loops for reading 2D array 
   for(j=0;j<n;j++){
   scanf("%d",&a[i][j]);			//reading the elements
   }
   }
   printf("array elements\n");
   for(i=0;i<m;i++)				//using for loops for printing 2D array
   for(j=0;j<n;j++)
   printf("elements are%d\n",a[i][j]);		//printing all the 2D array elements
  return 0;
}
