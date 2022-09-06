//WAP to pass pointer as a argument to the function?
#include<stdio.h>
float average(int *a,int n);//function declaration
int main(){
	int a[5]={1,2,3,4,5};//declaring array
	int n=5;
	float result;
	result=average(a,n);//calling function
	printf("average value is:%f",result);
}
float average(int *a,int n){
	float res;
	float sum=0;
for(int i=0;i<5;i++){
	sum+=a[i];

}
	res=sum/n;
	return res;
}
