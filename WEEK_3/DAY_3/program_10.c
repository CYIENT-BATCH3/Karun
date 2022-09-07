//WAP TO FIND SMALLEST AND LARGEST NUMBER IN GIVEN ARRAY USING POINTER?
#include<stdio.h>
int main(){
	int *arr[]={30,2,6,4,5};//declare array of pointers
	int size=5,largest=arr[0],smallest=arr[0];//declare variable
	for(int i=0;i<size;i++)
	{
		if(arr[i]>=largest)//condition to check largest
		{
			largest=arr[i];//storing largest element
		}		
	
	    else if(smallest>=arr[i])//condition to check smallest
	    {
	        smallest=arr[i];//storing smallest
	    }
	    }
	printf("address of smallest %u\n smallest value %d\n",&smallest,smallest);
	printf("address of largest%u\n largest value %d\n",&largest,largest);l
}