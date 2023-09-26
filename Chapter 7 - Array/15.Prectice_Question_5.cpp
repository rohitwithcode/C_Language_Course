#include<stdio.h>
void Positive(int arr[],int size){
	for(int i=0;i<size;i++){
		if(arr[i]>=0){
			printf("%d ",arr[i]);
		}
		else{
			continue;
		}
	}
}
int main()
{
	printf("Enter the array size= ");
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the array element at index %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	Positive(arr,n);
	return 0;
}
