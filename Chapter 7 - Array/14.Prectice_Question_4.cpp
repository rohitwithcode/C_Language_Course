#include<stdio.h>
void printArray(int arr[],int n){
	for(int i=n;i>0;i--){
		printf("%d ",arr[i]);
	}
}
int main()
{
	printf("Enter the array size= ");
	int n;
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter the array element at index %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printArray(arr,n);
}
