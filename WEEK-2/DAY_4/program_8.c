// WAP to read and print multi-dimensional array
#include <stdio.h>

int main()
{		
   int a[4][4][4],i,j,k,m,n,o;	//declaring multi-dimensional arrays and counter variables i,j,k	
   printf("enter rows and columns");
   scanf("%d%d%d",&m,&n,&o);	//reading the variables		
   printf("enter the array elements");
   for(i=0;i<m;i++){			
   for(j=0;j<n;j++){
  for(k=0;k<o;k++){
   scanf("%d",&a[i][j][k]);
   }
   }
   }
   printf("two dimensional array elements\n");
   for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   {
       for(k=0;k<o;k++){
   printf("\t%d",a[i][j][k]);
   }
   printf("\n");
   }